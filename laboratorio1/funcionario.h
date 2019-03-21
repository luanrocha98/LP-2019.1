#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "data.h"
#include <iostream>
#include <string.h>
class Funcionario {
	private:
		std::string nome;

		std::string CPF;
		
		float salario;

		Data dataDeAdmissao;


	public:
		friend std::ostream& operator<< (std::ostream &o, Funcionario const f);

		float getSalario();
		void setSalario(float salario);

		Funcionario();
		Funcionario(std::string nome, std::string CPF, float salario, Data dataDeAdmissao);

		std::string getCPF();

		bool periodoDeExperiencia();

		void AumentoDeSalario(int porcentagem);
};



#endif