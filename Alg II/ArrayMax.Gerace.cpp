#include <stdio.h>

main(){
	int A[10];
	int cmax;
	int i;
	for(i=0; i<10; i++){
		printf("inserisci l'elemento %d\n", i);
		scanf("%d", &A[i]);
	}
	cmax=A[0];
	for(i=0; i<10; i++){
		if(cmax<A[i])
			cmax = A[i];
	}
	printf("il massimo e' %d\n", cmax);
}
