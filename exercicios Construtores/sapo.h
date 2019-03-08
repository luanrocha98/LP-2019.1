
#ifndef SAPO_H
#define SAPO_H

#include <iostream> 
#include <string>
#include "dado.h"


class Sapo{
	private:
		// Identificador unico de cada sapo.
		std::string identificador;

		// Distancia percorrida pelo sapo.
		int distanciaPercorrida;

		//Quantidade de pulos dados.
		int qtdDePulosDados;

		

		
	public:
		static int distanciaTotalDaCorrida;
		static int getDistanciaTotalDaCorrida();
		static int tamanhoDoPulo;

		//Dado que vai sortear números aleatórios para o tamanho do pulo.
		Dado NumeroAleatorio;

		Sapo(); //Construtor padrão
		Sapo( const Sapo &sapo ); //Construtor cópia 
		Sapo(std::string i, int disPer, int qtdPulos); //Construtor parametrizado

		// Getters e setters
		std::string getIdentificador();
		void setIdentificador(std::string novoIdentificador);

		int getDistanciaPercorrida();
		void setDistanciaPercorrida(int novaDistanciaPercorrida);

		int getQtdDePulosDados();
		void setQtdDePulosDados(int novaQtdDePulosDados);

		void pular(); //faz o sapo pular.
	
		
		~Sapo();
};



#endif