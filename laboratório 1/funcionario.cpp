#include "funcionario.h"

float Funcionario::getSalario() {
	return salario;
}

void Funcionario::setSalario(float novoSalario){
	salario = novoSalario;
}

std::string Funcionario::getCPF() {
	return CPF;
}

bool periodoDeExperiencia() {
	//fsdklfsjlfslfs dfslf
}

std::ostream& operator<< (std::ostream &o, Funcionario const f) {
	o << "Nome: " << f.nome << "/n" 
	<< "CPF: " << f.CPF  << "/n" 
	<< "Salário: " << f.salario << "/n"; 
	
	return o;
}