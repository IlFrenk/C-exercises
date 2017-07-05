/* dato un numero reale l, si calcoli:
1. l'area del quadrato di lato l
2. l'area del cerchio di raggio l
3. l'area del triangolo equilatero di lato l */
#include<stdio.h>
#include<math.h>
main()
{
	float l,A;
	char r;
	printf("Programma per il calcolo di aree, dato un unico valore l\n\n");
	do
	{
		printf("\nimmetti l= ");
		scanf("%f",&l);
		do
		{
			printf("\ncosa vuoi calcolare?\n1. l'area di un quadrato [scrivi q]\n2. l'area di un cerchio [scrivi c]\n3. l'area di un triangolo equilatero [scrivi t]\n\n");
			scanf("\n%c",&r);
			if(r!='q'&&r!='c'&&r!='t')
				printf("\nimmetti un carattere valido\n\n");
		}while(r!='q'&&r!='c'&&r!='t');
		if(r=='q')
		{
			A=pow(l,2);
			printf("\nl'area del quadrato di lato %f e' %f\n\n",l,A);
		}
		if(r=='c')
		{
			A=M_PI*pow(l,2);
			printf("\nl'area del cerchio di raggio %f e' %f\n\n",l,A);
		}
		if(r=='t')
		{
			A=sqrt(l*l-(l/2)*(l/2))*l;
			printf("\nl'area del triangolo equilatero di lato %f e' %f\n\n",l,A);
		}
	printf("vuoi calcolare altre aree?\n-si [scrivi s]\n-no [scrivi n]\n\n");
	scanf("\n%c",&r);
	}while(r=='s');
}
