#include "funcionario.h"


Funcionario::Funcionario(){
	nome = "Robertao";
	CPF = "66666666666";
	salario = 0;

	dataDeAdmissao(1,1,1990);

}

Funcionario::Funcionario(std::string nome, std::string CPF, float salario, Data dataDeAdmissao){
	this->nome = nome;
	this->CPF = CPF;
	this->salario = salario;
	this->dataDeAdmissao = dataDeAdmissao;
}
float Funcionario::getSalario() {
	return salario;
}

void Funcionario::setSalario(float Salario){
	this->salario = salario;
}

std::string Funcionario::getCPF() {
	return CPF;
}

//bool periodoDeExperiencia() {
	//fsdklfsjlfslfs dfslf
//}

std::ostream& operator<< (std::ostream &o, Funcionario const f) {
	o << "Nome: " << f.nome << "/n" 
	<< "CPF: " << f.CPF  << "/n" 
	<< "Salário: " << f.salario << "/n"; 
	
	return o;
}

void Funcionario::AumentoDeSalario(int porcentagem) {

	salario += ((porcentagem/100)*salario);

}