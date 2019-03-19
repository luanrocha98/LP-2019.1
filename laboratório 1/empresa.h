#ifndef EMPRESA_H
#define EMPRESA_H

#include <iostream>
#include <string>
#include <vector>
#include "funcionario.h"

class Empresa {
	private:
		std::string nome;
		std::string CNPJ;
		std::vector<funcionario> listaDeFuncionarios;

	public:
		Empresa(); //Construtor padrão 
		Empresa(std::string nome, std::string CNPJ, std::vector<funcionario> listaDeFuncionarios); //Construtor parametrizado


		void inserirFuncionarios (funcionario NovoFuncionario);

		void criarEmpresa (std::string nome, std::string CNPJ, funcionario funcionarios);

		void listarFuncionarios();

}

#endif
