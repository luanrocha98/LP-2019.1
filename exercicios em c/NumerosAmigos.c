#include <stdio.h>

int somaDivisoresProprios ( int numero) {
	int soma =0;
	for ( int i =1; i < numero; ++i) {		
		if ( numero%i == 0)
			soma += i;		
	}
	return soma;
}


int main() {

	for( int i =1; i < 7000; ++i) {
		if(somaDivisoresProprios(i) > i){ 
			if (somaDivisoresProprios( somaDivisoresProprios(i)) == i) 
				printf("(%d, %d)\n", i, somaDivisoresProprios(i));		
		}
		
	}
	return 0;
}