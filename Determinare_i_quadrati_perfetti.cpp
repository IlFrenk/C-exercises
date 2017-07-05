#include<stdio.h>
#include<math.h>
main()
{
	int a,i,n;
	printf("programma per il calcolo dei quadrati dei numeri interi precedenti al numero inserito\n\n");
	printf("inserisci un numero intero positivo, diverso da 0.\n");
	printf("nel caso si inserisca un numero con virgola, verra' considerata la sua parte intera: ");
	scanf("%d",&n);
	while(n<=0)
	{
		printf("inserisci un numero intero positivo, diverso da 0: ");
		scanf("%d",&n);
	}
	for(i=0;i<=n;i++)
	{
		a=pow(i,2);
		printf("\n%d\n",a);
	}
}
