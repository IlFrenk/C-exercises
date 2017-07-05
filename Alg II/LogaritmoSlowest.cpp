#include <stdio.h>
#include <math.h>

main(){
	float x=0, n;
	int pot = pow(2,x);
	printf("inserisci un numero:\n");
	scanf("%f", &n);
	while(pot != n){
		x++;
	}
	printf("il log in base 2 di %f e' %f\n", n, x);
}
