#include <stdio.h>

int push(int t, int *a, int n){ // t=elemento da inserire nella pila, a=puntatore all'inizio array, n=dimensione array
	if(a[0]+1 == n)
		return 0;
	else{
		a[0]++; // la pila sarà lunga 1 in più
		a[a[0]] = t;
		return 1;
	}
}

int pop(int *t, int *a, int n){ // *t,*a = passaggio dei parametri per riferimento
	if(a[0] == 0) // if pila vuota
		return 0;
	else{
		*t = a[a[0]];
		a[0]--;
		return 1;
	}
}

main(){
	int c, a[10], t, k, tot; // t = testa della pila, c = coda della pila
	for(int i=1; i<=5; i++){
		printf("Inserisci una cifra\n");
		scanf("%d", &c);
		push(c, a, 10);
	}
	k = 1;
	t = 1;
	tot = 0;
	while(k == 1){
		k = pop(&c, a, 10);
		if(k == 1){
			tot += t*c;
			t *= 10;
		}
	}
	printf("Il totale e' %d\n", tot);
}
