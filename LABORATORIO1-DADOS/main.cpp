#include <iostream> 
#include "jogador.h" //incluido biblioteca "jogo.h" para utilizar sua funções.
#include "jogo.h"
#include "dado.h"
//GRUPO :ANDRÉ HABIB && LUAN ROCHA 

int Jogo::valorGanhador = 20;  //atribuindo valor a variável estática pertecente a classe jogo.

int main(){
	
	int nJogadores = 0; //variavel responsavel por guaradar quantidade de sapos

	Jogo game;

	std::cout<< "Quantidade de jogadores:" << std::endl; // pedindo quantidade de sapos
	std::cin >> nJogadores; // recebendo variavel

	int vetorJogadores[nJogadores]; // vetor com os nome dos sapos que seu tamanho é determinado pelo 

	for (int i = 0; i < nJogadores; ++i) // adcionado os numeros dos sapos
	{
		std::cout << "Digite o numero do jogador " <<  i+1 << " :" << std::endl;
		std::cin >> vetorJogadores[i];
		game.adicionarJogador(vetorJogadores[i]); 
	}

	game.interface(nJogadores); // chamando o método interface

	return 0;
}