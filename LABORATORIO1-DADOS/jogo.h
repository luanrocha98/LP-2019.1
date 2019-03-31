#ifndef jogo_h
#define jogo_h
//GRUPO :ANDRÉ HABIB && LUAN ROCHA 
#include <vector>
#include "jogador.h" // adcionado biblioteca "jogador.h"
#include "dado.h" // adcionado biblioteca "dado.h"
class Jogo{

private:
	std::vector<Jogador> listaDeJogadores; // lista de objetos da classe Jogador
public:


	static int valorGanhador; // vaŕiável estática

	void adicionarJogador(int numeroJogador); // método responsável por adicionar apenas os números dos jogadores.

	int mecanica(Jogador verificarJogador); // método para verificar a situação dos pontos dos jogadores

	int interface(int quantidadeJogadores); // método responsável por fazer maior parte do rpgrama funcionar, interface e junções de métodos.

};

#endif