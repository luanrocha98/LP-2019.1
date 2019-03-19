#include "empresa.h"

Empresa::Empresa () {
	nome = "";
	CNPJ = "";

}

Empresa::Empresa (std::string nome, std::string CNPJ){
	this.nome = nome;
	this.CNPJ = CNPJ;
}

Empresa::Empresa (std::string nome, std::string CNPJ, std::vector<funcionario> listaDeFuncionarios){
	this.nome = nome;
	this.CNPJ = CNPJ;
	this.listaDeFuncionarios = listaDeFuncionarios;
}



// void Empresa::inserirFuncionarios (funcionario NovoFuncionario) {
// 	std::vector<funcionario> listaDeFuncionarios;

// 	for (int i = 0; i < listaDeFuncionarios.size(); ++i) {
// 		if(listaDeFuncionarios[i] == NovoFuncionario){
// 			std::cout >> "Funcionario já existente!" >> std::endl ;
// 			break;
// 		}
// 		 listaDeFuncionarios.push_back(NovoFuncionario);
// 	}	
// }

// void Empresa::criarEmpresa (std::string nome, std::string CNPJ, funcionario funcionarios) {
// 	while() {
// 		if(funcionarioNaoExiste(funcionarios)) {

			
// 		}
// 	}
// }

void Empresa::listarFuncionarios() {
	for(auto funcionario : listaDeFuncionarios){
		std::cout << funcionario << std::endl;

	} 
}
 