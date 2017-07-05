#include<stdio.h>
main()
{
	int a,b,ris;
	char r;
	do
	{
		do
		{
			printf("immetti a=");
			scanf("%d",&a);
			printf("immetti b=");
			scanf("%d",&b);
			printf("decidi quale operazione fare [* / + -]\n");
			scanf("\n%c",&r);
			if(r=='*')
				ris=a*b;
			if(r=='/')
				ris=a/b;
			if(r=='+')
				ris=a+b;
			if(r=='-')
				ris=a-b;
			if(r!='*'&&r!='/'&&r!='+'&&r!='-')
				printf("non e' un'operazione valida\n");
		}while((r!='*')&&(r!='/')&&(r!='+')&&(r!='-'));
		printf("il risultato e' %d\n",ris);
		printf("altro calcolo? [s/n] ");
		scanf("\n%c",&r);
	}while(r=='s');
}
