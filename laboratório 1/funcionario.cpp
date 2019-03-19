#include "funcionario.h"
#include <time.h>

float Funcionario::getSalario() {
	return salario;
}

void Funcionario::setSalario(float novoSalario){
	salario = novoSalario;
}

std::string Funcionario::getCPF() {
	return CPF;
}

bool Funcionario::periodoDeExperiencia(int diaAtual, int mesAtual, int anoAtual) {
	
    Data dataAtual( diaAtual, mesAtual, anoAtual);
 
  	return (dataAtual--90) >= periodoDeExperiencia ; 
    	
}

std::ostream& operator<< (std::ostream &o, Funcionario const f) {
	o << "Nome: " << f.nome << "/n" 
	<< "CPF: " << f.CPF  << "/n" 
	<< "Salário: " << f.salario << "/n"; 
	
	return o;
}