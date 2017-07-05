#include <stdio.h>
#define N 10

struct studente{
	char *cognome;
	int matricola;
	int voto;
};

int fail(struct studente classe[]){
	int i, cnt=0;
	for(i=0; i<N; i++)
		if(classe[i].voto < 18)
			cnt++;
	return cnt;
}

main(){
	struct studente classe[N];
	int i, k;
	for(i=0; i<N; i++){
		printf("inserisci la matricola dello studente %d\n", i);
		scanf("%d", &classe[i].matricola);
		printf("inserisci il voto\n");
		scanf("%d", &classe[i].voto);
	}
	k = fail(classe);
	printf("%d studenti che non hanno superato l'esame\n", k);
}
