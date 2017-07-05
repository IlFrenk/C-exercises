/* dati 10 numeri, scrivili invertiti ma con lo stesso indice */
#include<stdio.h>
main()
{
	int A[10],i,B[10],h;
	printf("inserisci 10 numeri\n");
	for(i=0;i<10;i++)
		scanf("%d",&A[i]);
	i--;
	for(h=0;h<10;h++)
	{
		B[h]=A[i];
		i--;
		printf(" indice:%d contenuto:%d\n",h,B[h]);
	}
}
