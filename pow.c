/*----------------------------------------------*
 |Julián Alberto Gaitán Arias                   |
 |Universidad de Caldas - Facultad de Ingeniería|
 |Ingeniería en Sistemas y Computación          |
 |Twitter: @guatajuk                            |
 |GitHub: guatajuk                              |
 *--------------------------------------------- */

#include <stdio.h>

int manual_pow (int b, int e){
	if (e == 0){
		return 1;
	}
	else {
		return b * manual_pow(b, e-1);
	}
}

int main (){
	int base, exponente;
	printf ("Ingrese el valor de la base: ");
	scanf("%d", &base);
	printf ("Ingrese el valor del exponente: ");
	scanf("%d", &exponente);
	if (exponente < 0){
		printf ("El resultado es: 1 / (%d)^%d\n", base, exponente*-1);
	}
	else{
		printf ("El resultado es: %d\n", manual_pow(base, exponente));	
	}
	return 0;
}