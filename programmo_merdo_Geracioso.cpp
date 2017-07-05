#include<stdio.h>
#define n 5
#define m 4
#define p 3
main()
{
	double A[n][m],B[m][p],C[n][p];
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("inserisci il valore di A[%d][%d]:\n",i,j);
			scanf("%f",&A[i][j]);
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<p;j++)
			{
				printf("inserisci il valore di B[%d][%d]:\n",i,j);
				scanf("%f",&B[i][j]);
			}
			for(i=0;i<n;i++)
			{
				for(j=0;j<p;j++)
				{
					C[i][j]=0;
					for(k=0;k<m;k++)
					{
						C[i][j]=A[i][k]*B[k][j];
					}
					printf("A*B=C=\n");
					for(i=0;i<n;i++)
					{
						for(j=0;j<p;j++)
						{
							printf("%f  ",C[i][j]);
							printf("\n");
						}
					}
				}
			}
		}
	}
}
