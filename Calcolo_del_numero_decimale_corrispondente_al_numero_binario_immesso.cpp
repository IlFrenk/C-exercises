/* Programma per il calcolo di un numero da base 10 a base binaria */
#include <stdio.h>
main()
{
	int n,i,A[i];
	printf("programma per il calcolo del numero binario corrispondente al numero decimale immesso (solo per numeri interi positivi)\n\n");
	printf("immetti il numero decimale ");
	scanf("%d",&n);
	for(i=0;n>1;i++,n/2)
	{
		if(n%2==0)
			A[i]=0;
		else
			A[i]=1;
	}
	printf("\n%d",A[i]);
}
