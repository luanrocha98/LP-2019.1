#include "sapo.h"

Sapo::Sapo() : NumeroAleatorio(1,tamanhoDoPulo) {
	identificador = "c";
	distanciaPercorrida = 0;
	qtdDePulosDados = 0;
}

// Usa os parametros de objeto de sapo no sapo a ser instanciado.
Sapo::Sapo ( const Sapo &sapo ) : NumeroAleatorio (1,tamanhoDoPulo)
{
	identificador = sapo.identificador;
	distanciaPercorrida = sapo.distanciaPercorrida;
	qtdDePulosDados = sapo.qtdDePulosDados;
}

Sapo::Sapo(std::string i, int disPer, int qtdPulos) : distanciaPercorrida(0),  NumeroAleatorio( 1, tamanhoDoPulo) {
	identificador = i;
	distanciaPercorrida = disPer;
	qtdDePulosDados = qtdPulos;
}

 int Sapo::getDistanciaTotalDaCorrida(){
	return distanciaTotalDaCorrida;
}

std::string Sapo::getIdentificador() {
	return identificador;
}
void Sapo::setIdentificador(std::string novoIdentificador){
	identificador = novoIdentificador;
}


int  Sapo::getDistanciaPercorrida(){
	return distanciaPercorrida;
}
void Sapo::setDistanciaPercorrida(int novaDistanciaPercorrida){
	distanciaPercorrida = novaDistanciaPercorrida;
}

int Sapo::getQtdDePulosDados(){
	return qtdDePulosDados;
}
void Sapo::setQtdDePulosDados(int novaQtdDePulosDados){
	qtdDePulosDados = novaQtdDePulosDados;
}

// Usa a objeto de dado para fazer o sapo pular uma distancia aleatoria e contabiliza.
void Sapo::pular(){
	distanciaPercorrida +=  NumeroAleatorio.aleatorio(); 
	qtdDePulosDados++; 
}

Sapo::~Sapo() {

}

