#include <stdio.h>
#include <time.h>

int main (){
	clock_t begin, end;
	double time_spent;
	begin = clock();
	int n, x;
	float sum = 0;
	printf ("Ingrese el valor de x: ");
	scanf("%d", &x);
	printf ("Ingrese el valor de n: ");
	scanf("%d", &n);
	int fact = 1;
	int pot = 1;					
	for (int i = 1; i <= n; i++){				
		pot = pot * x;				
		fact = fact * i;			
		sum = sum + pot/fact;		
	}
	printf ("El resultado de la sumatoria es: %.2f", sum);	
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf ("\nEl tiemo de ejecución fue de %f", time_spent);			
}
