#include <iostream>
#include "aluno.h"


std::string Aluno::getNome() {
	return nome;
}
void Aluno::setNome(std::string novoNome){
	nome = novoNome;
}


unsigned long int  Aluno::getMatricula(){
	return matricula;
}
void Aluno::setMatricula(unsigned long int novaMatricula){
	matricula = novaMatricula;
}


std::string Aluno::getTurno(){
	return turno;
}
void Aluno::setTurno(std::string novoTurno){
	turno = novoTurno;
}


int Aluno::getNumeroDeDisciplinas() {
	return numeroDeDisciplinas;
}
void Aluno::setNumeroDeDisciplinas(int novoNumeroDeDisciplinas){
	numeroDeDisciplinas = novoNumeroDeDisciplinas;
}


std::string Aluno::getOrientador(){
	return orientador;
}
void Aluno::setOrientador(std::string novoOrientador){
	orientador = novoOrientador;
}