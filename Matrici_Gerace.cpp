#include<stdio.h>
#define n 5
#define m 7
main()
{
	double A[n][m],x[m],y[n];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("inserisci il valore di A[%d][%d]: \n",n,m);
			scanf("%f",&A[j]);
		}
	}
	for(i=0;i<m;i++)
	{
		printf("inserisci il valore di x[%d]:\n",i);
		scanf("%f",&x[i]);
	}
	for(i=0;i<n;i++)
	{
		y[i]=0;
		for(j=0;j<n;j++)
		{
			y[i]=y[i]+A[i][j]*x[i];
		}
	}
	printf("Ax=y=\n");
	for(i=0;i<n;i++)
	{
		printf("%f\n",y[i]);
	}
}
