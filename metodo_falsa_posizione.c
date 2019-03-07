#include <stdlib.h>
#include <stdio.h>
/* Il metodo della falsa posizione */

int main(){
  double x=0, division=0, ausX=0, n=0, b=0, fakePosition=0, ausFake=0; //il prefisso aus sta per 'variabile ausiliare', mi serve per salvare risultati intermedi

  printf("L'equazione e' x + (1/n)*x = b\n");
  printf("inserisci il valore di n: ");
  scanf("%lf", &n);
  printf("inserisci il valore di b: ");
  scanf("%lf", &b);
  printf("inserisci la falsa posizione: ");
  scanf("%lf", &fakePosition);

  /* primo metodo: applico la falsa posizione come la applicò Ahmes: */
  ausFake = (1/n)*fakePosition + fakePosition; //l'equazione è x + (1/n)*x.
  division = b / ausFake;
  ausX = fakePosition * division; //lo moltiplico per la falsa posizione e ottengo il risultato (ausX).

  /* secondo metodo: faccio direttamente la proporzione: */
  x = b * fakePosition / ausFake; //x = (b * falsa poszione)/(x+(x/n))
  printf("x ottenuta secondo Ahmes = %lf\n", ausX);
  printf("x ottenuta con la proporzione= %lf\n", x);

  /*controllo che i due metodi abbiano dato lo stesso risultato! */
  if(x == ausX)
    printf("l'algoritmo e' giusto!\n");
  else{
    printf("mmh c'e' qualcosa di sbagliato.\n");
    /*NOTA: con valori particolari (primi tra loro, numeri grandi, ecc), il compilatore potrebbe fare
    una leggera approssimazione che potrebbe fargli stampare "mmh c'è qualcosa di sbagliato" nonostante
    i due numeri siano effettivamente uguali. */
  }
  return 0;
}
