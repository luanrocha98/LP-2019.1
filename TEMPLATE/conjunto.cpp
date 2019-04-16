#include "conjunto.h"
#include <algorithm>

template<typename T> 
Conjunto<T>::Conjunto(){


}


template<typename T> 
void Conjunto<T>::add( T novoElemento) {
	listaElementos.push_back(novoElemento);
}


template<typename T> 
void Conjunto<T>::add(Conjunto<T> &novoConjunto) {
	 listaElementos.push_back(novoConjunto.listaElementos);
}

template<typename T> 
void Conjunto<T>::imprimir() {
	std::cout << "Elementos do conjunto: [";

	for(auto &i : listaElementos) {

		std::cout << i << " ";
	}

	std::cout << " ]" << std::endl;
}

template<typename T> 
Conjunto<T> Conjunto<T>::operator+(Conjunto<T>  &conjuntoSomado){
	Conjunto<T> conjuntoResult;

	conjuntoResult.add(*this);

	for (auto &i : conjuntoSomado.listaElementos){
		if(std::find(conjuntoResult.listaElementos.begin(), conjuntoResult.listaElementos.end(), i) == conjuntoResult.listaElementos.end())
		conjuntoResult.listaElementos.push_back(i);
	}

	return conjuntoResult;

}

template<typename T> 
Conjunto<T> Conjunto<T>::operator-(Conjunto<T>  &conjuntoSubtraido){
	Conjunto<T> conjuntoResult;

	for (auto &i : listaElementos){
		if(std::find(conjuntoSubtraido.listaElementos.begin(), conjuntoSubtraido.listaElementos.end(), i) == conjuntoSubtraido.listaElementos.end())
		conjuntoResult.listaElementos.push_back(i);
	}

	return conjuntoResult;
}

template<typename T> 
Conjunto<T> Conjunto<T>::operator*(Conjunto<T>  &conjuntoMultiplicado){
	Conjunto<T> conjuntoResult;

	for (auto &i : listaElementos){
		if(std::find(conjuntoMultiplicado.listaElementos.begin(), conjuntoMultiplicado.listaElementos.end(), i) != conjuntoMultiplicado.listaElementos.end())
		conjuntoResult.listaElementos.push_back(i);
	}

	return conjuntoResult;
}


int main(){


	return 0;
}