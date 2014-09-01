#include <stdio.h>
#include <time.h>

int main (){
	clock_t begin, end;
	double time_spent;
	begin = clock();
	int n, x;
	long long sum = 0;
	printf ("Ingrese el valor de x: ");
	scanf("%d", &x);
	printf ("Ingrese el valor de n: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		long long pot = 1;
		long long fac = 1;
		long long fun = 0;
		for (int j = 1; j <= i; j++){
			pot = pot * x;
			fac = fac * j;
		}
		fun = pot / fac;
		sum = sum + fun;
	}
	printf ("\nEl resultado de la sumatoria es: %lld", sum);
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf ("\nEl tiemo de ejecución fue de %f", time_spent);
	return 0;
}