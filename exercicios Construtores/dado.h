
#ifndef DADO_H
#define DADO_H

#include <random>

class Dado {
	private:
		// Cria um objeto para um dispositivo de randomização ( cria um randomizador )
		std::random_device Randomizador; 

		// Cria um gerador de números aleatórios 
		std::default_random_engine Gerador;

		//Define o intervalo dos numéros aleatórios
		std::uniform_real_distribution<float> Distribuicao;
		

	public:
		Dado( int Menor = 0, int Maior = 1 ) : 
			Randomizador (), 
			Gerador ( Randomizador() ), 
			Distribuicao ( Menor, Maior )
		{ /* Vazio */ }

		//Retorna um número aleatório no intervalo de distribuição
		int aleatorio()
		{
			return std::round( Distribuicao(Gerador) );
		}
};

#endif