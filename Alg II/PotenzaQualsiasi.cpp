#include <stdio.h>
#include <math.h>

main(){
	int base, esp;
	double pot;
	printf("questo programma calcola la potenza di un qualsiasi numero intero immesso dall'utente:\n\n");
	printf("inserisci la base della potenza:  ");
	scanf("%d", &base);
	printf("inserisci l'esponente:  ");
	scanf("%d", &esp);
	pot=pow(base, esp);
	printf("\nil risultato di %d^%d e' %f\n", base, esp, pot);
}
