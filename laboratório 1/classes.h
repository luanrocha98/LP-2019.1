#ifndef CLASSES_H
#define CLASSES_H

#include <date.h>
#include <iostream>

class funcionario {
	private:
		std::string nome;

		float salario;

		date dataDeAdimissao;

class empresa {
	private:
		std::string nome;
		std::string CNPJ;
		std::vector<funcionario> listaDeFuncionarios;

	public:
		empresa(); //Construtor padrão 
		empresa(std::string nome, std::string CNPJ, std::vector<funcionario> listaDeFuncionarios); //Construtor parametrizado


		void InserirFuncionarios (funcionario NovoFuncionario) {
			std::vector<funcionario> listaDeFuncionarios;

			for (int i = 0; i < listaDeFuncionarios.size(); ++i) {
				if(listaDeFuncionarios[i] == NovoFuncionario){
					std::cout >> "Funcionario já existente!" >> std::endl ;
					break;
				}
				 listaDeFuncionarios.emplace_back(NovoFuncionario);
		}

		void criarEmpresa(std::string nome, std::string CNPJ, funcionario funcionarios) {
			while() {
				if(funcionarioNaoExiste(funcionarios)) {


				}
			}




		} 

}
}