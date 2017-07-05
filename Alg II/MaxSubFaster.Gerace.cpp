#include <stdio.h>

main(){
	int A[10], S[10], i, m, j, k, s;
	for(i=0; i<10; i++){
		printf("inserisci l'elemento %d\n", i);
		scanf("%d", &A[i]);
	}
	S[0] = 0;
	for(i=0; i<10; i++)
		S[i+1] = S[i] + A[i];
	m=0;
	for(j=1; j<=10; j++){
		for(k=j; k<=10; k++){
			s = S[k] - S[j-1];
			if(s>m)
				m = s;
		}
	}
	printf("il massimo e' %d\n", m);
}
