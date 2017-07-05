/* strutture autoreferenziali:

le strutture autoreferenziali sono strutture puntatori alle strutture stesse

struct lista{
	int dato;
	struct lista *next;
};

struct lista a, b, c;
a.dato = 1;
b.dato = 2;
c.dato = 3;
a.next = null;
b.next = null;
c.next = null;

a :  [1][null]			[1][-]-->[2][-]-->[3][null]
b:   [2][null]			a.next = &c;
c:   [3][null]			a.next -> dato;
						a.next -> next -> dato;
*/
#include <stdio.h>
#include <stdlib.h>
typedef char DATO

struct linked-list{
	DATO d;
	struct linked-list *next;
};

typedef struct linked-list ELEMENTO
typedef ELEMENTO *LINK // *LINK è un puntatore ad un elemento

head = malloc(sizeof(ELEMENTO));
head -> d = 'n';
head -> next = null;
head -> next = malloc(sizeof(ELEMENTO));
head -> next -> d = 'e';
head -> next -> next = null;

LINK string_to_list(char s[]){
	LINK head;
	if(s[0] == '\0')
		return null;
	else{
		head = malloc(sizeof(ELEMENTO));
		head -> d = s[0];
		head -> next = string_to_list(s+1);
		return head;
	}
}
