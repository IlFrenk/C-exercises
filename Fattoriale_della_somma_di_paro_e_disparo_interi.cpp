/* inseriti due numeri interi, il primo pari il secondo dispari, verificare che la somma tra i due non faccia più di 10.
Dopodichè calcolare il fattoriale di quella somma. */
#include<stdio.h>
main()
{
	int a,b,sum,fatt,cont;
	do
	{
		fatt=1;
		do
		{
			printf("inserisci un numero intero pari = ");
			scanf("%d",&a);
			if(a%2==1)
				printf("non e' un numero pari!\n");
		}while(a%2==1);
		do
		{
			printf("inserisci un numero intero dispari = ");
			scanf("%d",&b);
			if(b%2==0)
				printf("non e' un numero dispari!\n");
		}while(b%2==0);
		sum=a+b;
	}while(sum>10);
	for(cont=sum;cont>1;cont=cont-1)
	{
		fatt=fatt*cont;
	}
	printf("il fattoriale della somma e' %d\n",fatt);
}
