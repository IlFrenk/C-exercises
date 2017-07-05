/* dati i tre lati di un triangolo, determinare se è equilatero, isoscele, scaleno o rettangolo */
#include <stdio.h>
main()
{
	float a,b,c;
	char r;
	printf("programma per il calcolo della natura di un triangolo, dati i tre lati:\n\n");
	do
	{
		do
		{
			printf("\nimmetti il primo lato del triangolo ");
			scanf("%f",&a);
			printf("immetti il secondo lato del triangolo ");
			scanf("%f",&b);
			printf("immetti il terzo lato del triangolo ");
			scanf("%f",&c);
			if(a==0||b==0||c==0)
				printf("\nun triangolo con almeno un lato 0 e' degenere. Immetti valori validi:\n\n");
			else
			{
				if(a<0||b<0||c<0)
					printf("\nun triangolo non puo' avere lati negativi. Immetti valori validi:\n\n");
				else
				{
					if(a>=b+c||b>=a+c||c>=a+b)
						printf("\nper esistere, ogni lato del triangolo deve essere minore della somma degli altri due. Immetti valori validi:\n\n");
					else
					{
						if((b>c&&a<=b-c)||(b<=c&&a<=c-b)||(a>c&&b<=a-c)||(a<=c&&b<=c-a)||(a>b&&c<=b-a)||(a<=b&&c<=a-b))
							printf("\nper esistere, ogni lato del triangolo deve essere maggiore della differenza degli altri due. Immetti valori validi:\n\n");
					}
				}
			}
		}while(a<=0||b<=0||c<=0||a>=b+c||b>=a+c||c>=a+b||(b>c&&a<=b-c)||(b<=c&&a<=c-b)||(a>c&&b<=a-c)||(a<=c&&b<=c-a)||(a>b&&c<=b-a)||(a<=b&&c<=a-b));
		if(a==b&&b==c)
			printf("\nil triangolo e' equilatero\n");
		else
		{
			if((a==b&&b!=c)||(a==c&&c!=b)||(b==c&&c!=a))
				printf("\nil triangolo e' isoscele\n");
			else
			{
				if(a!=b&&b!=c)
					printf("\nil triangolo e' scaleno\n");
			}
		}
		if(a*a==b*b+c*c)
			printf("\nil triangolo e' rettangolo, con ipotenusa a=%f\n",a);
		else
		{
			if(b*b==a*a+c*c)
				printf("\nil triangolo e' rettangolo, con ipotenusa b=%f\n",b);
			else
			{
				if(c*c==b*b+a*a)
					printf("\nil triangolo e' rettangolo, con ipotenusa c=%f\n",c);
			}
		}
		printf("\nvuoi inserire altri valori?  [se si, scrivi s. Altrimenti scrivi n]   ");
		scanf("\n%c",&r);
	}while(r=='s');
}
