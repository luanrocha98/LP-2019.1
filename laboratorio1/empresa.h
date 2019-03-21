#ifndef EMPRESA_H
#define EMPRESA_H

#include <iostream>
#include <string>
using String = std::string;

#include <vector>
#include "funcionario.h"

class Empresa {
	private:
		String nome;
		String CNPJ;
		std::vector<Funcionario> listaDeFuncionarios;

	public:
		Empresa(); //Construtor padrão 
		Empresa(std::string nome, std::string CNPJ, std::vector<funcionario> listaDeFuncionarios); //Construtor parametrizado

		static NumeroDeFuncionarios;

		void adiconarFuncionario (String nome, String CPF, float salario, Data dataDeAdmissao);

		void criarEmpresa (std::string nome, std::string CNPJ);

		void listarFuncionarios();

		//void listarMediaDeFuncionarios;

		//getters e setters 

		std::vector<Funcionario> getListaFuncionario();
}

#endif
