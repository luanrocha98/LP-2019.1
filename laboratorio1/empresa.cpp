#include "empresa.h"


Empresa::Empresa () {
	nome = "";
	CNPJ = "";

}

Empresa::Empresa (std::string nome, std::string CNPJ){
	this.nome = nome;
	this.CNPJ = CNPJ;
}

Empresa::Empresa (std::string nome, std::string CNPJ, std::vector<funcionario> listaDeFuncionarios){
	this.nome = nome;
	this.CNPJ = CNPJ;
	this.listaDeFuncionarios = listaDeFuncionarios;
}



bool Empresa::adicionarFuncionarios (String nome, String CPF, float salario, Data dataDeAdmissao) {

	listaDeFuncionarios.emplace_back(nome,CPF,salario,dataDeAdmissao);

   if( verificaFuncionario(NovoFuncionario) ) return true;
		 else return false;

	}

void Empresa::criarEmpresa (std::string nome, std::string CNPJ){
	this.nome = nome;
	this.CNPJ = CNPJ;
}

void Empresa::listarFuncionarios() {
	for(auto funcionario : listaDeFuncionarios){
		std::cout << funcionario << std::endl;

	} 
}

std::vector<funcionario> Empresa::getListaFuncionario(){
	return listaDeFuncionarios;
}