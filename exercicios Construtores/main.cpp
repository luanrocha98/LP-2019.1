#include "sapo.h"
#include <vector>
#include <iostream>
#include <thread>         // std::this_thread::sleep_for
#include <chrono> 		//std::chrono::seconds


int Sapo::distanciaTotalDaCorrida = 100; // Define o tamanho do trajeto a ser percorrido.
int Sapo::tamanhoDoPulo = 10; // Define o tamanho do pulo máximo dos sapos.

int main() {

	unsigned int i= 0; // iterador para o vetor de sapos
	int vencedor = 0; // posição no vetor de sapos do vencedor da corrida.

	//Cria participantes
	Sapo roberto("Roberto",0,0);
	Sapo sergio("Sergio",0,0);
	Sapo luiz("Luiz",0,0);

	std::vector<Sapo> vetorDeSapo; // inicializa o vetor de sapos 

	//Armazena participantes no vetor
	vetorDeSapo.emplace_back(roberto);
	vetorDeSapo.emplace_back(sergio);
	vetorDeSapo.emplace_back(luiz);

	for (int k = 3; k > 0 ; --k){
		std::cout << "       " << k << std::endl << std::endl;
		std::this_thread::sleep_for (std::chrono::seconds(1));
	}
	std::cout << "       P U L E M!" << std::endl << std::endl << std::endl;
	std::this_thread::sleep_for (std::chrono::seconds(1));

	while( true ) {

		 vetorDeSapo[i].pular() ;// vetorDeSapo[i].pular(); Faz o sapo da posĩção atual pular.

		
		//Verifica se o sapo da posição atual, chegou ao final da corrida. Se sim, o looping encerra. 
		if(vetorDeSapo[i].getDistanciaPercorrida() >= Sapo::getDistanciaTotalDaCorrida()){
			vencedor = i; //Guarda a posição do vencedor.	
			break;
		}
		
		std::cout << vetorDeSapo[i].getIdentificador() << std::endl;

		for (int j = 0; j < (Sapo::distanciaTotalDaCorrida -1); ++j) {
		 	std::cout << "." ;
		 	if(j == vetorDeSapo[i].getDistanciaPercorrida())
		 		std::cout << "O" ;
		}
		std::cout << "P" << std::endl << std::endl;

		if(i == (vetorDeSapo.size() -1)){ // Reseta o iterador.
			
			std::cout << "_________________________________________________________________________";
			std::cout << "____________________________________________________" <<  std::endl << std::endl;
			std::this_thread::sleep_for (std::chrono::seconds(1));
			i = 0;
			continue;
		}
		i++; 
	}

	std::cout << std::endl << std::endl << std::endl <<"--------------------------------------------------";
	std::cout << " ----------------------------------------------------------------------" << std::endl;
	std::cout << "                                             F I M   D A   C O R R I D A      " << std::endl;
	std::cout << "------------------------------------------------------------";
	std::cout << "------------------------------------------------------------" << std::endl;


	//Mostra o resultado da corrida.
	std::cout << ">>>  Vencedor: " <<  vetorDeSapo[vencedor].getIdentificador() << std::endl;
	std::cout << ">>>  Pulos dados: " <<  vetorDeSapo[vencedor].getQtdDePulosDados() << std::endl;
	std::cout << ">>>  Distancia Percorrida: " << vetorDeSapo[vencedor].getDistanciaPercorrida() << std::endl;




	return 0;
}