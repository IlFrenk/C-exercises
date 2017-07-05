#include <stdio.h>
#include <stdlib.h>

int nodo_gradomax(link A[], int n){
	int i, grado;
	int gradomax=0;
	int nodo=0;
	for(i=0; i<n; i++){
		if(A[i]!=NULL){
			a=A[i];
			grado=1;
			while(a->next!=NULL){
				a=a->next;
				grado++;
			}
			if(grado>gradomax){
				gradomax=grado;
				nodo=i;
			}
		}
	}
	return nodo;
}

struct elem{
	int d;
	struct elem *elem;
};
typedef struct coda coda;

void inizializzazione(coda *q){
	q->cnt=0;
	q->testa=NULL;
	q->fondo=NULL;
}

int estrarre(coda *q, int *i){
	elem *p;
	if(q->cnt!=0){
		*i=q->testa->d;
		p=q->testa;
		q->testa=q->testa->next;
		q->cnt--;
		free(p);
		return 1;
	} else
		return 0;
}

void inserire(int i, coda *q){
	elem *p;
	p=malloc(sizeof(elem));
	p->d=i;
	p->next=NULL;
	if(q->cnt!=0){
		q->fondo->next=p;
		q->fondo=p;
	} else{
		q->testa=p;
		q->fondo=p;
	}
	q->cnt++;
}




int Bellman_Ford(int *w, int s, int *d, int *p, int n){
	int i,u,v,ris=1;
	initialize_single_source(n,s,d,pi);
	for(i=1; i<n; i++)
		for(u=0; u<n; u++)
			Relax(u,v,w,n,d,pi);
	for(u=0; u<n; u++)
		for(v=0;v<n; v++)
			if(d[v]>d[u]+w[u+n*v])
				ris=0;
	return ris;
}



void Extend_s_p(int *D, int *W, int n){ //W è matrice con i costi, n è dimensione matrici
	int *D1;
	int i,j,k;
	D1=calloc(n*n, sizeof(int));
	for(i=0; i<n; i++)
		for(j=0; j<n; j++){
			D1[i+n*j]=1000*n;
			for(k=0; k<n; k++)
				if(W[k+n*j]!=1000*n)
					if(D[i+k*n]+W[k+n*j]<D1[i+n*j])
						D1[i+n*j]=D[i+n*k]+W[k+n*j];
		}
		for(i=0; i<n; i++)
			for(j=0; j<n; j++)
				D[i+n*j]=D1[i+n*j];
}

Slow_AP_SP(W){
	int i,j,m;
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			D[i+n*j]=W[i+n*j];
	for(m=2; m<n; m++)
		Extend_S_P(D,W,n);
}

void Faster_AP_SP(W){
	int i,j,m;
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			D[i+n*j]=W[i+n*j];
	m=1;
	while(n-1>m){
		Extend_S_P(D,D,n);
		m=2*m;
	}
}







main(){
	char asso;
	int n,v,u,s;
	int *w, *d, *pi;
	printf("quanti nodi ha il grafo?\n");
	scanf("%d", &n);
	w=calloc(n*n, sizeof(int));
	d=calloc(n, sizeof(int));
	pi=calloc(n,sizeof(int));
	for(u=0; u<n; u++)
		for(v=0; v<n; v++){
			if(n!=v){
				printf("esiste l'arco %d - %d?\n", n,v);
				scanf("%c", &asso);
				if(asso=='n')
					w[u+n*v]=1000*n;
				else{
					printf("inserisci il costo dell'arco %d - %d\n", n,v);
					scanf("%d", &w[u+n*v]);
				}
			}
			printf("inserisci il nodo successivo\n");
			scanf("%d", &s);
			Dijkstra(w,s,d,pi,n);
			printf("valore del cammino minimo da %d\n", s);
			for(v=0; v<n; v++)
				if(d[v]!=1000*n)
					printf("%d : %d\n", v, d[v]);
				else
					printf("%d : infinito\n", v);
				printf("nodi padre:\n");
				for(v=0; v<n; v++)
					if(pi[v]!=n)
						printf("%d : %d\n", v, pi[v]);
					else
						printf("%d : -\n", v);
		}
}
