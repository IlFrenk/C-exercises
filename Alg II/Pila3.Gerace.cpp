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
	int b[10], a[30], n, c, k, d;
	a[0] = 0;
	b[0] = 0;
	printf("Quanti numeri vuoi inserire?\n");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		printf("Inserisci il numero %d\n");
		scanf("%d", &c);
		while(c != 0){
			d = c%10;
			push(d, b, 10);
			c /= 10;
		}
		while(k == 1){
			k = pop(&c, b, 10);
			if( k ==1)
				push(c, a, 30);
		}
	}
	int t, tot;
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
