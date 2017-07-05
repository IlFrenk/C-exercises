#include <stdio.h>

struct carta{
	int seme;
	int valore;
};
typedef struct carta carta;
carta a[10];

void bubble_sort(carta a[], int n){
	int i,j;
	carta aux;
	for(i=0; i<n-1; i++){
		for(j=n-1; j>i; j--){
			if((a[j-1].seme>a[j].seme)||((a[j-1].seme==a[j].seme)&&(a[j-1].valore>a[j-1].valore))){
				aux=a[j-1];
				a[j-1]=a[j];
				a[j]=aux;
			}
		}
	}
}

void insertionsort(carta a[], int n){
	int i,j;
	carta aux;
	for(i=1; i<n; i++){
		aux=a[i];
		j=i-1;
		while((j>=0) && ((a[j].seme>aux.seme)||(a[j].seme==aux.seme)&&(a[j].valore>aux.valore))){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=aux;
	}
}

void inserisci(carta a[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("Inserisci il seme della carta in posizione %d\n", i);
		scanf("%d", &(a[i].seme));
		printf("Inserisci il valore della carta in posizione %d\n", i);
		scanf("%d", &(a[i].valore));
	}
}

void stampa(carta a[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("a[%d].seme = %d\n", i, a[i].seme);
		printf("a[%d].valore = %d\n", i, a[i].valore);
	}
}

main(){
	carta a[5];
	inserisci(a,5);
	insertionsort(a,5);
	bubble_sort(a,5);
	stampa(a,5);
}
