#include <iostream>
#include <thread>         
#include <chrono>
#include "jogo.h"

//GRUPO :ANDRÉ HABIB && LUAN ROCHA 

void Jogo::adicionarJogador(int numeroJogador){
	Jogador jogador(numeroJogador,0); // chamando construtor parametizado de jogador
	listaDeJogadores.emplace_back(jogador); //adicionando a lista
}

int Jogo::mecanica(Jogador verificarJogador){

auto it = listaDeJogadores.begin(); // iterador apontado para o inicio da lista

int numero_jogador = verificarJogador.getNumeroJogador(); // numero do jogador a ser excluido

if(verificarJogador.getPontosJogador() == valorGanhador){ // verificar se o jogador da rodada ganhou
	std::cout << "O vencedor é " << verificarJogador.getNumeroJogador() <<std::endl;	
	return 1;	
}
if(verificarJogador.getPontosJogador()  < valorGanhador){
   std::cout << "O jogador " << verificarJogador.getNumeroJogador() << " ainda pode jogar" << std::endl; // informando que o jogador da rodada está abaixo do número mas ainda pode jogar
}
if (verificarJogador.getPontosJogador()  > valorGanhador){ // verifica se o jogador ultrapassou o valor para ganhar o jogo
	std::cout << "O jogador " << verificarJogador.getNumeroJogador() << " ta fora do jogo" << std::endl; // informando que o jogador da rodada ta fora do jogo

	while(it != listaDeJogadores.end()){
	if(it->getNumeroJogador() == numero_jogador){ // no exemplo, estamos excluindo o jogador com id 3 mas se fosse uma função isso poderia sere uma variável
		listaDeJogadores.erase(it); // passa pro método erase um ponteiro pra posição a ser excluída da lista
		break; // se achou, cancele o for pois, no exemplo, estamos ecluindo um jogador bem específico
	}

	it++; // se não, avança o iterador;

	}

	return 2;
	}

return 0;

}

int Jogo::interface(int quantidadeJogadores){

int controlador = 0; // controlador de jogar ou parar de jogar

int saida_while = 0; // controlador de saida

Dado dados(1,6); // construto de dado para limitar os extremos

int dado1 = 0;
int dado2 = 0;

while(saida_while!= 5){	 

for(int i = 0; i < quantidadeJogadores; i++){

	if(quantidadeJogadores == 1){ // verificando se resta apenas 1 jogador 
		std::cout << "O vencedor é " << listaDeJogadores[i].getNumeroJogador() <<std::endl;	
		std::cout << "O jogo acabou !!" <<std::endl;
		saida_while = 5;
		return 0;	
		break;	
	}	
	
	std::cout<< "Jogador:" << listaDeJogadores[i].getNumeroJogador() << " vai jogar ? caso jogue digite 1, caso queira parar digite 2!" << std::endl;
	std::cin>>controlador; // atribuindo um inteiro que represnta a ação do jogador em relação ao jogo.

	if(controlador == 1){
		std::cout<< "Jogador:" << listaDeJogadores[i].getNumeroJogador() << " Lançou os dados: " <<  (dado1 = dados.lancamento()) << "/" << (dado2 = dados.lancamento()) << std::endl;
		std::this_thread::sleep_for (std::chrono::seconds(1));
		listaDeJogadores[i].acumuloDePontos(dado1,dado2); // chamando o método acumuloDePontos
	}

	std::cout<<" O jogador: "<< listaDeJogadores[i].getNumeroJogador()<< " -- Valor de pontos do jogador: " << listaDeJogadores[i].getPontosJogador() << std::endl;

	switch(mecanica(listaDeJogadores[i])){ // controle de retornos do método mecanica
		case 1:
			std::cout << "O jogo acabou !!" <<std::endl;
			saida_while = 5;
			return 0;
			break;
			
		case 2:
			quantidadeJogadores --; // incrementa -1 caso um jogador ultrapasse o valor para gnhar o jogo
			break;
	}
}
}
return 0;
}



	

