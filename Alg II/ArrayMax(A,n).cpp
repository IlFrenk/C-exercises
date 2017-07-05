#include <stdio.h>

main(){
	int n;
	printf("inserisci la lunghezza dell'array: ");
	scanf("%d", &n);
	int A[n];
	printf("inserisci gli elementi dell'array:\n");
	for(int j=0; j<n; j++){
		scanf("%d", &A[j]);
	}
	int cmax = A[0];
	for(int i=0; i<n; i++){
		if(cmax<A[i])
			cmax=A[i];
	}
	printf("l'elemento massimo dell'array e' %d", cmax);
}
