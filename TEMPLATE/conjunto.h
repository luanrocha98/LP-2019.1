#ifndef CONJUNTO_H
#define CONJUNTO_H

#include <iostream>
#include <vector>
#include <algorithm>

template<typename T> 
class Conjunto {
	private:
		std::vector<T> listaElementos;
	public:
		Conjunto();
		void add(T novoElemento);
		void add(Conjunto& novoConjunto);
		void imprimir();

		Conjunto operator+(Conjunto  &conjuntoSomado);
		Conjunto operator-(Conjunto  &conjuntoSubtraido);
		Conjunto operator*(Conjunto  &conjuntoMutiplicado);
};


#endif