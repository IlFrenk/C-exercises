/* dati due valori interi a,b determina:
1. se sono positivi o negativi
2. se sono pari o dispari
3. il valore di a+b
4. se a*b è pari o dispari, positivo o negativo*/
#include<stdio.h>
main()
{
	int a,b,sum,prod;
	char r;
	do
	{
		printf("\n\ndati due numeri interi a,b si determina\n\n1. se sono positivi o negativi\n2. se sono pari o dispari\n3. a+b\n4. se a*b e' pari o dispari, positivo o negativo\n\n");
		printf("immmetti a= ");
		scanf("%d",&a);
		printf("immetti b= ");
		scanf("%d",&b);
		if(a%2==0)
			printf("%d e' pari\n",a);
		else
			printf("%d e' dispari\n",a);
		if(b%2==0)
			printf("%d e' pari\n",b);
		else
			printf("%d e' dispari\n",b);
		if(a>0)
			printf("%d e' positivo\n",a);
		else
			printf("%d e' negativo\n",a);
		if(b>0)
			printf("%d e' positivo\n",b);
		else
			printf("%d e' negativo\n",b);
		sum=a+b;
		printf("la loro somma e' %d\n",sum);
		prod=a*b;
		if(a%2==1&&b%2==1&&prod>0)
			printf("il loro prodotto e' %d, e' dispari ed e' positivo\n\n",prod);
		if(a%2==1&&b%2==1&&prod<0)
			printf("il loro prodotto e' %d, e' dispari ed e' negativo\n\n",prod);
		if((a%2==0||b%2==0)&&prod>0)
			printf("il loro prodotto e' %d, e' pari ed e' positivo\n\n",prod);
		if((a%2==0||b%2==0)&&prod<0)
			printf("il loro prodotto e' %d, e' pari ed e' negativo\n\n",prod);
		printf("vuoi immettere altri numeri? [si scrivi s, no scrivi n]\n");
		scanf("\n%c",&r);
	}while(r=='s');
}
