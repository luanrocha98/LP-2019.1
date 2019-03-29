#include "funcionario.h"


Funcionario::Funcionario():
	nome("Robertao"),
	CPF("66666666666"),
	salario(0),
	dataDeAdmissao(1,1,2019)
{}

Funcionario::Funcionario(std::string nome, std::string CPF, float salario, date dataDeAdmissao){
	this->nome = nome;
	this->CPF = CPF;
	this->salario = salario;
	this->dataDeAdmissao = dataDeAdmissao;
}
float Funcionario::getSalario() {
	return salario;
}

void Funcionario::setSalario(float salario){
	this->salario = salario;
}

int Funcionario::getNumeroDeFuncionarios() {
return numeroDeFuncionarios;
}

std::string Funcionario::getCPF() {
	return CPF;
}

bool Funcionario::periodoDeExperiencia(date dataAtual) {
	date d = dataAtual;

	for(int i=0; i<90 ; ++i) {
		d--;
	}
	
	return (d<dataDeAdmissao);
}

std::ostream& operator<< (std::ostream &o, Funcionario const f) {
	o << "Nome: " << f.nome << "\n" 
	<< "CPF: " << f.CPF  << "\n" 
	<< "Salário: " << f.salario << "\n"
	<< "Data de admissão: " << f.dataDeAdmissao << "\n";
	
	return o;
}

