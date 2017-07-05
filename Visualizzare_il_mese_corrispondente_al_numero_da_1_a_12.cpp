/* dato un numero tra 1 e 12, che rappresenta il mese corrente, stampa il nome del mese per esteso */
#include<stdio.h>
main()
{
	int a;
	do
	{
		printf("Immetti un numero da 1 a 12, per scoprire il mese corrispondente ");
		scanf("%d",&a);
		if(a<1||a>12)
			printf("\nI mesi vanno da 1 a 12.\n\n");
	}while(a<1||a>12);
	switch(a)
	{
		case 1:
			printf("\nIl primo mese e' Gennaio.\n");
			break;
		case 2:
			printf("\nIl secondo mese e' Febbraio.\n");
			break;
		case 3:
			printf("\nIl terzo mese e' Marzo.\n");
			break;
		case 4:
			printf("\nIl quarto mese e' Aprile.\n");
			break;
		case 5:
			printf("\nIl quinto mese e' Maggio.\n");
			break;
		case 6:
			printf("\nIl sesto mese e' Giugno.\n");
			break;
		case 7:
			printf("\nIl settimo mese e' Luglio.\n");
			break;
		case 8:
			printf("\nL'ottavo mese e' Agosto.\n");
			break;
		case 9:
			printf("\nIl nono mese e' Settembre.\n");
			break;
		case 10:
			printf("\nIl decimo mese e' Ottobre.\n");
			break;
		case 11:
			printf("\nL'undicesimo mese e' Novembre.\n");
			break;
		case 12:
			printf("\nIl dodicesimo mese e' Dicembre.\n");
			break;
	}
}
