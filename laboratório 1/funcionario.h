#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "data.h"
#include <iostream>

class Funcionario {
	private:
		std::string nome;

		std::string CPF;
		
		float salario;

		Data dataDeAdimissao;


	public:
		friend std::ostream& operator<< (std::ostream &o, Funcionario const f);

		float getSalario();
		void setSalario(float novoSalario);

		std::string getCPF();

		bool periodoDeExperiencia();
};



#endif