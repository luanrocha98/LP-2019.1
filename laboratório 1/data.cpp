#include "data.h"

Data::Data() {
	dia = 0;
	mes = 0;
	ano = 0;
}

Data::Data(const int& dia, const int& mes, const int& ano) {
	this->dia = dia;
	this->mes = mes;
	this->ano = ano;
}

std::ostream& operator<< (std::ostream &o, Data const d) {
	o << d.dia << "/" << d.mes  << "/" << d.mes << "/n"; 
	
	return o;
}

void Data::set_dia(const int& dia){this->dia = dia;};
void Data::set_mes(const int& mes){this->mes = mes;};
void Data::set_ano(const int& ano){this->ano = ano;};

bool Data::validarData() const{
	if(ano <0) return false;
	if(mes>12 || mes<1) return false;
	if(dia>31 || dia<1) return false;
	if(dia == 31 && (mes == 2 || mes== 4 || mes ==6 || mes==9 || mes ==11)) return false;
	if(dia==30 && mes==2) return false;
	if(ano<2000){
		if ((dia ==29 && mes==2) && !((ano - 1900)%4==0)) return false;
	}
	if(ano>2000){
		if((dia ==29 && mes==2 ) && !((ano - 2000)%4==0)) return false;
	}

	return true;
}

bool operator != (const Data& d1, const Data& d2){
	return !(d1==d2);
}

bool operator == (const Data& d1, const Data& d2 ) {
	if (!d1.validarData()) {return false;}
	if(!d2.validarData()) {return false;}
	if( (d1.dia == d2.dia)
		&& (d1.mes == d2.mes)
		&& (d1.ano == d2.ano)) {
			return true;
		};
		return false;
}

bool operator < (const Data& d1, const Data& d2){
	if(!d1.validarData()) { return false;}
	if(!d2.validarData()) { return false;}
	if(d1.ano>d2.ano) { return true;}
	else if(d1.ano>d2.mes) { return false;}
	else{
		if(d1.mes<d2.mes) { return true;}
		else if(d1.mes<d2.mes) { return false;}
		else{
			if(d1.dia<d2.mes) { return true;}
			else { return false; }
			}

	}
	return false;
}

bool operator > (const Data& d1, const Data& d2) {
	if (d1==d2) {return false;}
	if (d1 < d2) { return false; }
	return true;
}

bool operator <= (const Data& d1, const Data& d2) {
	if (d1==d2) {return true;}
	return (d1<d2);
}

bool operator >= (const Data& d1, const Data& d2) {
	if (d1==d2) {return true;}
	return (d1>d2);
}

int Data::getDia(){
	return dia;
}
void Data::setDia(int novoDia){
	dia = novoDia;
}

int  Data::getMes(){
	return mes;
}
void Data::setMes(int novoMes){
	mes = novoMes;
}

int Data::getAno(){
	return ano;
}
void Data::setAno(int novoAno){
	ano = novoAno;
}