#include <stdio.h>

main(){
	int A[10], M[11], m, t, s, i;
	for(i=0; i<10; i++){
		printf("inserisci l'elemento %d\n", i);
		scanf("%d", &A[i]);
	}
	M[0] = 0;
	for(t=0; t<10; t++){
		if(0>M[t] + A[t])
			M[t+1] = 0;
		else
			M[t+1] = M[t] + A[t];
	}
	m = 0;
	for(t=1; t<=10; t++){
		if(m<M[t])
			m = M[t];
	}
	printf("il massimo e' %d", m);
}
