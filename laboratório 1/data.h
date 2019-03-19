#ifndef EMPRESA_H
#define EMPRESA_H

#include <iostream>


class Data {
	private:
		int dia;

		int mes;

		int ano;


	public:
		Data();
		Data(const int& dia, const int& mes, const int& ano);

		friend std::ostream& operator<< (std::ostream &o, Data const d);

		friend Data& operator--();
		friend Data& operator--(int );

		//operadores de comprarações

		friend bool operator == (const Data&, const Data&);
		friend bool operator != (const Data&, const Data&);
		friend bool operator < (const Data&, const Data&);
		friend bool operator > (const Data&, const Data&);
		friend bool operator <= (const Data&, const Data&);
		friend bool operator >= (const Data&, const Data&);

		bool validarData(void) const; //metodo para validar data.

		void set_dia(const int& dia);
		void set_mes(const int& mes);
		void set_ano(const int& ano);

		int getDia();
		void setDia(int novoDia);

		int getMes();
		void setMes(int novoMes);

		int getAno();
		void setAno(int novoAno);

		
};


#endif