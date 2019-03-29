#include "empresa.h"


Empresa::Empresa () :
	nome(""),
	CNPJ("")

{}

Empresa::Empresa (std::string nome, std::string CNPJ){
	this->nome = nome;
	this->CNPJ = CNPJ;
	std::cout << "Empresa " << nome << " criada com sucesso!" << std::endl;
	numeroDeEmpresas++;
}


int Empresa::getNumeroDeEmpresas() {
return numeroDeEmpresas;
}

void Empresa::adicionarFuncionario(String nome, String CPF, float salario, date dataDeAdmissao) {

	for(auto& trabalhador : listaDeFuncionarios){
		if( CPF == trabalhador.getCPF()){
			std::cout << "O funcionario " << nome << " já participa dessa empresa!" << std::endl;
			return;
		}		
	}

	listaDeFuncionarios.emplace_back(Funcionario(nome,CPF,salario,dataDeAdmissao));
	std::cout << "O funcionario " << nome << " foi adicionado com sucesso!" << std::endl;

	Funcionario::numeroDeFuncionarios++;
}


void Empresa::listarFuncionarios() {
	std::cout << "Lista de funcionários: " << std::endl;
	for(auto& trabalhador : listaDeFuncionarios)
		std::cout << trabalhador << std::endl;
}

void Empresa::aumentoDeSalario(float porcentagem) {
	
	for(auto& trabalhador : listaDeFuncionarios)
		trabalhador.setSalario( trabalhador.getSalario() + (porcentagem/100)*trabalhador.getSalario() );

	std::cout << "Aumento de salário de " << porcentagem <<" porcento para os funcionários!" << std::endl;
}

void Empresa::listarFuncionariosPerExp(date dataAtual) {
	std::cout << "Funcionários em período de experiência: " << std::endl;

	for(auto& trabalhador : listaDeFuncionarios){
		if(trabalhador.periodoDeExperiencia(dataAtual))
		std::cout << trabalhador << std::endl;
	} 

}
float Empresa::mediaDeFuncPorEmpresas() {
	return Funcionario::getNumeroDeFuncionarios()/getNumeroDeEmpresas() ;
}

