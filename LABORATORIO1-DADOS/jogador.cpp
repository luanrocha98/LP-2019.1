#include "jogador.h"

Jogador::Jogador(){ // construtor padrão
	numero = 0;
	pontos = 0;
}

Jogador::Jogador(const Jogador &jogador){ // construtor cópia
	numero = jogador.numero;
	pontos = jogador.pontos;
}

Jogador::Jogador(int numero, int pontos){ // construtor parametizado
	this->numero = numero;
	this->pontos = pontos;
}

int Jogador::acumuloDePontos(int dado1, int dado2){  //método que atribiu os valores dos dados aos pontos dos jogadores
	int soma = dado1 + dado2;
	pontos += soma;

	return pontos;
}

	//getters ande setters

void Jogador::setPontosJogador(int pontos){
	this->pontos = pontos;
}

int Jogador::getPontosJogador(){
	return pontos;
}

int Jogador::getNumeroJogador(){
	return numero;
}