#include <iostream>
#include "aluno.h"


using namespace std;

int main() {
	Aluno aluno1;
	aluno1.setNome("Luan Rocha Nascimento");
	aluno1.setMatricula(20170145984);
	aluno1.setTurno("Manhã/tarde");
	aluno1.setNumeroDeDisciplinas(7);
	aluno1.setOrientador("Augusto");
	
	cout << "Nome = " << aluno1.getNome() << endl;
	cout << "Matrícula = " << aluno1.getMatricula() << endl;
	cout << "Turno = " << aluno1.getTurno() << endl;
	cout << "Numero De Disciplinas = " << aluno1.getNumeroDeDisciplinas() << endl;
	cout << "Orientador Acadêmico = " << aluno1.getOrientador() << endl;

	return 0;
}