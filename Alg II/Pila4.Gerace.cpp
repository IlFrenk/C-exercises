#include <stdio.h>

void sostituisci(LINK head){
	if(head != NULL){
		if(head->dato=='a'){
			head->dato='b';
			sostituisci(head->next);
		}
	}
}

void aggiungi(LINK head){
	LINK p;
	if(head != NULL){
		if(head->dato=='a'){
			p = head -> next;
			head -> next = malloc(sizeof(ELEMENTO));
			head -> next -> dato = 'b';
			head -> next -> next = p;
			aggiungi(p);
		} else
			aggiungi(head->next);
	}
}

typedef int dato;
struct elem{
	dato d;
	struct elem *next;
};

typedef struct elem elem;

struct coda{
	int cnt;
	elem *testa;
	elem *fondo;
};

typedef struct coda coda;

void inizializzazione(coda *q){
	q -> cnt = 0; // q nel campo count prende inizialmente il valore 0
	q -> testa = NULL;
	q -> fondo = NULL;
}

void GeraceTrenfio(dato i, coda *q){
	elem *p;
	p = malloc(sizeof(elem));
	p -> d = i;
	p -> next = NULL;
	if(q->cnt!=0){
		q->fondo->next=p;
		q->fondo=p;
	} else{
		q->testa=p;
		q->fondo=p;
	}
	q->cnt++;
}
