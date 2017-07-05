/* determinare quale dei due numeri immessi è maggiore */
#include<stdio.h>
main()
{
	float a,b;
	printf("immetti due numeri e ti diro' qual e' il piu' grande dei due\n\n");
	printf("a=");
	scanf("%f",&a);
	printf("b=");
	scanf("%f",&b);
	if(a==b)
		printf("\ni due numeri sono uguali\n");
	if(a>b)
		printf("\nil maggiore e' a=%f",a);
	if(a<b)
		printf("\nil maggiore e' b=%f",b);
}
