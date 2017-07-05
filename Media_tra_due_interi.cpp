/* calcolo della media aritmetica dati due valori interi
                   ERROR INSIDE                         */
#include<stdio.h>
main()
{
	int a,b;
	float m;
	printf("immetti un valore intero = ");
	scanf("%d",&a);
	printf("immetti un altro valore intero = ");
	scanf("%d",&b);
	m=(a+b)/2; //come fare per far sì che m risulti 2,5 (per esempio)?
	printf("la media e' %f",m);
}
