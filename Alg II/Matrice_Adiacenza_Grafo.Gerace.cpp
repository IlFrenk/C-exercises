#include<stdio.h>
#include<stdlib.h>

/* Determinare la matrice di adiacenza di un grafo */


int isolato(int A[], int n){ //restituisce 1 se c'è un nodo isolato, 0 se non c'è
	int i,j,iso=0;
	for(i=0; iso==0 && i<n; i++){
		for(j=0; A[i+n*j]==0 && j<n; j++);
		if(j==n)
			iso=1;
	}
	return iso;
}

int nodoGradoMax(int A[], int n){
	int i,j,grado;
	int gradomax=0, nodo=0;
	for(i=0; i<n; i++){
		grado=0;
		for(j=0; j<n; j++)
			grado+=A[i+n*j];
		if(grado>gradomax){
			gradomax=grado;
			nodo=i;
		}
	}
	return nodo;
}


main(){
	int n,m,k,r,i,j;
	//int *A;
	printf("Da quanti nodi e' composto il grafo?\n");
	scanf("%d", &n);
	int A[n*n];
	printf("Da quanti archi e' composto il grafo?\n");
	scanf("%d", &m);
	for(k=0; k<n*n; k++){
		A[k]=0;
	}
	for(k=0; k<m; k++)
		do{
			printf("Inserisci l'arco %d\n", k);
			printf("Inserisci il primo nodo\n");
			scanf("%d", &i);
			printf("inserisci il secondo nodo\n");
			scanf("%d", &j);
			if(A[i+n*j] == 1){ // se l'arco esiste già
				printf("l'arco gia' esiste\n");
				r=1;
			}else{
				A[i+n*j]=1;
				A[j+n*i]=1;
				r=0;
			}
		}while(r==1);
		k=isolato(A,n);
		if(k==1)
			printf("Esiste almeno un nodo isolato\n");
		else
			printf("Non esiste nessun nodo isolato\n");
	
}
