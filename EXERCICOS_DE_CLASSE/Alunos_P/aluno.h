
#ifndef ALUNO_H
#define ALUNO_H

#include <string>

class Aluno{
	private:
		std::string nome;
		unsigned long int matricula;
		std::string turno;
		int numeroDeDisciplinas;
		std::string orientador;

	public:
		std::string getNome();
		void setNome(std::string novoNome);

		unsigned long int getMatricula();
		void setMatricula(unsigned long int novaMatricula);

		std::string getTurno();
		void setTurno(std::string novoTurno);

		int getNumeroDeDisciplinas();
		void setNumeroDeDisciplinas(int novoNumeroDeDisciplinas);

		std::string getOrientador();
		void setOrientador(std::string novoOrientador);

};

#endif