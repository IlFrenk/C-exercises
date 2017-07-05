/* crea un heap e tramite inserisci() ci mette dentro degli elementi.
Tramite estrai() li prende in ordine crescente.
*/

#include <stdio.h>

struct heap{
	int dim;
	int A[100];
};
/*
int inserisciCompito(heap *h, int v, int k){
	int pos;
	int aux, b1,b2;
	if((*h).dim < k)
		return 0;
	else{
		(*h).A[k]=v;
		pos=v;
		while((pos!=1)&&((*h).A[pos]>(*h).A[pos/2])){
			aux=(*h).A[pos];
			(*h).A[pos]=(*h).A[pos/2];
			(*h).A[pos/2]=aux;
			pos=pos/2;
		}
		if(pos==k){
			b1=0;
			if(pos*2<=(*h).dim)
				if((*h).A[pos*2]>(*h).A[pos])
					b1=1;
			b2=0;
			if(pos*2<=(*h).dim)
				if((*h).A[pos*2+1]>(*h).A[pos])
					b2=1;
			while(b1||b2){
				if(b2==0){
					aux=(*h).A[pos*2];
					(*h).A[pos*2]=(*h).A[pos];
					(*h).A[pos]=aux;
					pos=pos*2;				
				}
				else
					if(((*h).A[pos*2]>(*h).A[pos*2+1])||(pos*2==(*h).dim)){
						aux=(*h).A[pos*2];
						(*h).A[pos*2]=(*h).A[pos];
						(*h).A[pos]=aux;
						pos=pos*2;	
					} // continua ma non ho voglia di scrivere le minchiate di Gerace
			}
	}
}
*/

int inserisci(heap *h, int v){
	int pos, aux;
	if((*h).dim == 99){
		printf("Attenzione l'heap e' pieno\n");
		return 0;
	}
	else{
		(*h).A[(*h).dim+1]=v;
		pos=(*h).dim+1;
		while((pos!=1) && ((*h).A[pos]>(*h).A[pos/2])){
			aux=(*h).A[pos];
			(*h).A[pos]=(*h).A[pos/2];
			(*h).A[pos/2]=aux;
			pos=pos/2;
		}
		(*h).dim++;
		return 1;
	}
}

int estrai(heap *h, int *v){
	int pos, aux, b1,b2;
	if((*h).dim == 0)
		return 0;
	else{
		*v=(*h).A[1];
		(*h).A[1] = (*h).A[(*h).dim];
		pos=1;
		(*h).dim--;
		b1=0;
		if(pos*2 <= (*h).dim)
			if((*h).A[pos*2] > (*h).A[pos])
				b1=1;
		b2=0;
		if(pos*2+1 <= (*h).dim)
			if((*h).A[pos*2+1] > (*h).A[pos])
				b2=1;
		while(b1==1||b2==1){
			if(b2 == 0){
				aux=(*h).A[pos*2];
				(*h).A[pos*2]=(*h).A[pos];
				(*h).A[pos]=aux;
				pos=pos*2;
			}
			else{
				if((*h).A[pos*2] > (*h).A[pos*2+1]){
					aux=(*h).A[pos*2];
					(*h).A[pos*2]=(*h).A[pos];
					(*h).A[pos]=aux;
					pos=pos*2;
				}
				else{
					aux=(*h).A[pos*2+1];
					(*h).A[pos*2+1] = (*h).A[pos];
					(*h).A[pos] = aux;
					pos = pos*2+1;
				}
			}
			b1=0;
			if(pos*2 <= (*h).dim)
				if((*h).A[pos*2] > (*h).A[pos])
					b1=1;
			b2=0;
			if(pos*2+1 <= (*h).dim)
				if((*h).A[pos*2+1] > (*h).A[pos])
					b2=1;
		}
		return 1;
	}
}

int regolare(A[], int n){
	int j, reg=1, grado=0, grado1, i=0;
	for(j=0; j<n; j++)
		grado+=A[i+n*j];
	for(i=1; reg==1 && i<n; i++){
		grado1=0;
		for(j=1; j<n; j++)
			grado1+=A[i+n*j];
		if(grado1!=grado)
			reg=0;
	}
	return reg;
}




//color=  0 bianco;  1 grigio;  2 nero
void BFS(link *A, int s, int *pi, int *d, int n){
	int n, color[n], temp;
	coda *Q;
	link p;
	for(u=0; u<n; u++){
		if(u!=s){
			color[u]=0;
			d[u]=n;
			pi[u]=n;
		}
		else{
			color[s]=1;
			d[s]=0;
			pi[s]=n;
		}
	}
	inizializzazione(Q);
	inserisci(s,Q);
	while(Q->cnt!=0){
		temp=estrai(Q, &u);
		p=A[u];
		while(p!=NULL){
			if(color[p->nodo]==0){
				color[p->nodo]=1;
				d[p->nodo]=d[u]+1;
				pi[p->nodo]=u;
				inserisci(p->nodo,Q);
			}
			p=p->next;
		}
		color[u]=2; // 2=NERO
	}
}


//il risultato del DFS è una foresta, non un albero
int tempo;

void DFS_Visit(int n; link *A, int *pi, int *d, int *f, int *color, int n){
	link p;
	color[u]=1;
	d[u]=++temp;
	p=A[u];
	while(p!=NULL){
		if(color[p->nodo]==0){
			pi[p->nodo]=u;
			DFS_Visit(p->nodo, A, pi, d, f, color, n);
		}
		p=p->next;
	}
	color[u]=2;
	f[u]=++tempo;
}


void DFS(link *A, int *pi, int *d, int *f, int n){
	int color[n];
	int u;
	for(u=0; u<n; u++){
		color[u]=0;
		pi[u]=n;
	}
	tempo=0;
	for(u=0; u<n; u++){
		if(color[u]==0)
			DFS_Visit(u, A, pi, d, f, color, n);
	}
}



main(){
	int n, key, i;
	char c;
	heap h;
	h.dim=0;
	printf("quante chiavi vuoi inserire?\n");
	scanf("%d", &n);
	int e[n];
	for(i=0; i<n; i++){
		printf("inserisci la chiave %d:  ", i);
		scanf("%d", &key);
		inserisci(&h, key);
	}
	//printf("%d", h.dim);
	for(i=0; i<n; i++){
		estrai(&h, &e[i]);
		printf("v=%d\n", e[i]);
	}
}


