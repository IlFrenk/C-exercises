#include <stdio.h>
#include <stdlib.h>

void merge(int a[], int b[], int c[], int m, int n){
	int i=0, j=0, k=0;
	while(i<n && j<n){
		if(a[i]<b[j])
			c[k++] = a[j++];
		else
			c[k++] = a[i++];
		while(i<m)
			c[k++] = a[i++];
		while(j<n)
			c[k++] = b[j++];
	}
}

/* mergesort con 3 vettori */

void merge(int a[], int b[], int c[], int d[], int m, int n, int p){
	int i=0, j=0, l=0, k=0;
	while(i<m && j<n && l<p){
		if((a[i]<b[j]) && (a[i]<c[l]))
			d[k++]=a[i++];
		else{
			if(b[j]<c[l])
				d[k++]=b[j++];
			else
				d[k++]=c[l++];
			if(i=m){
				//codice di MergeSort.Gerace
				//fonde vettori b,c in vettore d
			}
			if(j==n){
				//fonde vettori a,c in vettore d
			}
			if(l==p){
				//fonde vettori a,b in vettore d
			}
		}
	}
}

/* merge sort con dimensione del vettore 2^i */

void mergesort(int k[], int n){
 	int j,t,m,*w;
 	w=calloc(n, sizeof(int));
 	for(t=1; t<n; t*=2){
 		for(j=0; j<n-t; j+=2*t){
 			merge(k+j, k+j+t, w+j, t, t); //sfrutta la merge con 3 vettori
 		}
 		for(j=0; j<n; j++){
 			k[j]=w[j];
 		}
 	}
 	free(w);
 }
 
 /* merge sort con dimensione del vettore 3^i */
 
 void mergesort(int k[], int n){
 	int j,t,m,*w;
 	w=calloc(n, sizeof(int));
 	for(t=1; t<n; t*=3){
 		for(j=0; j<n-t; j+=3*t){
 			merge(k+j, k+j+t, k+j+2*t, w+j, t, t, t); //sfrutta la merge con 3 vettori
 		}
 		for(j=0; j<n; j++){
 			k[j]=w[j];
 		}
 	}
 	free(w);
 }
 
 main(){
	int m, i, n;
	int *a, *b, *c;
	printf("inserisci la lunghezza del primo vettore\n");
	scanf("%d", &m);
	a=calloc(m, sizeof(int));
	printf("inserisci la lunghezza del secondo vettore\n");
	scanf("%d", &n);
	b=calloc(n, sizeof(int));
	printf("inserisci il primo vettore\n");
	for(i=0; i<m; i++){
		printf("inserisci l'elemento in posizione %d\n", i);
		scanf("%d", &a[i]);
		if(i!=0){
			while(a[i]<a[i-1]){
				printf("Errore! Vettore non ordinato. Inserisci nuovamente l'elemento\n");
				scanf("%d", &a[i]);
			}
		}
	}
	printf("inserisci il secondo vettore\n");
	for(i=0; i<n; i++){
		printf("inserisci l'elemento in posizione %d\n", i);
		scanf("%d", &b[i]);
		if(i!=0){
			while(b[i]<b[i-1]){
				printf("Errore! Vettore non ordinato. Inserisci nuovamente l'elemento\n");
				scanf("%d", &b[i]);
			}
		}
	}
	c=calloc(n+m, sizeof(int));
	merge(a, b, c, m, n);
	stampa(c, n+m);
}
