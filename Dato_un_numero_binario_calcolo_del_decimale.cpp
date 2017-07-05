/* calcolo del numero decimale corrispondente, dato un numero binario */
#include<stdio.h>
#include<math.h>
main()
{
	int n,d,q,i,w,z;
	printf("programma per il calcolo del numero decimale associato al numero binario immesso\n\n");
	do
	{
		printf("quante cifre ha il numero binario? ");
		scanf("%d",&q);
	}while(q<=0);
	printf("\ninserisci il numero binario. Cifra per cifra, partendo dal bit meno significativo (quello piu a destra)\n\n");
	for(i=0,w=0,z=0;i<q;i++,w++,z=z+n*pow(2,w))
	{
		do{
			scanf("%d",&n);
			if(n!=0&&n!=1)
				printf("\nuna delle cifre immesse non e' ne' 0 ne' 1. Reinseriscila.\n");
		}while(n!=0&&n!=1);
	}
	z=z/2;
	printf("\n%d",z);
}
