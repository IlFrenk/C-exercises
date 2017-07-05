/* dati 10 numeri, scrivi il successivo di ogni numero dato */
#include<stdio.h>
main()
{
	int A[10],i,f;
	printf("inserisci 10 numeri:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<10;i++)
	{
		f=A[i]+1;
		printf("%d",f);
	}
}
