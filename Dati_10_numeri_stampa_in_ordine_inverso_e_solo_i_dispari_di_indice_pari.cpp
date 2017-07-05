/* dati 10 numeri, da inserire, scrivili in ordine inverso stampando solo i dispari di indice pari (il secondo è dispari, stampa. E' pari, non stampa).
Si o no per rifare. */
#include<stdio.h>
#include<stdlib.h>
main()
{
	int A[10],i;
	printf("inserisci 10 numeri\n");
	for (i=0;i<10;i++)
		scanf("%d",&A[i]);
	for(i=9;i>=0;i--)
		if(A[i]%2==1&&i%2==0)
			printf("\n%d ",A[i]);
}
