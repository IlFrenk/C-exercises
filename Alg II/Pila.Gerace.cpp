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

main(){ // progr *stampa cifre al contrario* modificato per le pile
	int num, ultcif, a[10], h, b;
	int n = 0;
	printf("inserisci un numero intero\n");
	scanf("%d", &num);
	a[0] = 0;
	while(num != 0){
		ultcif = num % 10;
		push(ultcif, a, 10);
		num /= 10;
	}
	h = 1;
	while(h == 1){ // finché la pila è piena
		h = pop(&b, a, 10);
		if(h == 1)
			printf("%d", b);
	}
	printf("\n");
}
