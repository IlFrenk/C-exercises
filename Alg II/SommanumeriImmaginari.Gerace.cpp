#include <stdio.h>
/* typedef struct carte CARTE

CARTE c1, c2;
*/
struct complex{
	double re; // parte reale
	double im; // parte immaginaria
};
typedef struct complex complex;

void add(complex *a, complex b, complex c){
	a-> re = b.re + c.re; // a è un puntatore, vado a vedere cosa punta nel campo reale (e poi nell'immaginario)
	a-> im = b.im + c.im; // a-> re    equivale a    (*a).re
}

void per(complex *a, complex b, complex c){
	a->re = b.re * c.re - b.im *c.im;
	a->im = b.re * c.im + b.im * c.re;
}

main(){
	complex a, b, c;
	printf("inserisci la parte reale del primo numero\n");
	scanf("%f", &b.re);
	printf("inserisci la parte immaginaria del primo numero\n");
	scanf("%f", &b.im);
	printf("inserisci la parte reale del secondo numero\n");
	scanf("%f", &c.re);
	printf("inserisci la parte immaginaria del secondo numero\n");
	scanf("%f", &c.im);
	per(&a, b, c);
	printf("la parte reale del risultato e' %f\n", a.re);
	printf("la parte immaginaria del risultato e' %f\n", a.im);
}
