#include  <iostream>
#include "empresa.h"
#include "funcionario.h"

int main(){


	Empresa cientec("CIENTEC", 276143714263);

	funcionario tentativa;

	tentativa("Andre","66666666666",1500.00,19980423);

	if(cientec.getListaFuncionario().size() > 0){
		for(auto funcionario:cientec.getListaFuncionario()){
			std::cout<< funcionario << std::endl;
		}
	}
	



	return 0;
}