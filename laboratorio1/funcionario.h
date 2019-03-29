#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "date.h"
#include <iostream>
#include <string.h>

class Funcionario {
	private:
		std::string nome;

		std::string CPF;
		
		float salario;

		date dataDeAdmissao;


	public:
		friend std::ostream& operator<< (std::ostream &o, Funcionario const f);

		float getSalario();
		void setSalario(float salario);

		static int numeroDeFuncionarios;
		static int getNumeroDeFuncionarios();
	

		Funcionario();
		Funcionario(std::string nome, std::string CPF, float salario, date dataDeAdmissao);

		std::string getCPF();

		bool periodoDeExperiencia(date dataAtual);

		
};



#endif