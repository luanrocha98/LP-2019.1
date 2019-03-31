#ifndef jogador_h
#define jogador_h
#include <vector>

class Jogador{

private:
	int numero;
	int pontos;

public:

	Jogador(); // construto padrão.

	Jogador(const Jogador &jogador); // construto cópia.

	Jogador(int numero, int pontos);  // construto parametizado

	int acumuloDePontos(int dado1, int dado2); //método que atribiu os valores dos dados aos pontos dos jogadores

	//getters ande setters 
	
	void setPontosJogador(int pontos); 

	int getPontosJogador();

	int getNumeroJogador();


};

#endif