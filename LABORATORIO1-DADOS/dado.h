#ifndef dado_h
#define dado_h
 //GRUPO :ANDRÉ HABIB && LUAN ROCHA 
#include <random>
#include <iostream>
#include <utility>


 class Dado{

 private:

 	// Cria um objeto para o dispositivo de randomização.
 	std::random_device Randomizador;

 	//Cria uma maquina geradora de numeors randomicos.
 	std::default_random_engine Gerador;

 	//Define o intervalo dos números aleatorios
 	std::uniform_int_distribution<int> Distribuicao;

 public:

 	Dado();

 	Dado(int menor = 0, int maior = 1):
 			Randomizador (), 
			Gerador ( Randomizador() ), 
			Distribuicao ( menor, maior )
	{ /* Vazio */ }


	int lancamento()
	{
		return std::round( Distribuicao(Gerador) );	
	}

 };

#endif