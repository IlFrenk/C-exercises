#include <stdio.h>
#include <stdlib.h>

typedef char DATO
struct linked_list{
	DATO d;
	struct linked_list *next;
};

typedef struct linked_lista ELEMENTO;
typedef ELEMENTO *LINK

LINK s_t_l(char s[]){
	LINK head = null, tail;
	int n;
	if(s[0] != '\0'){
		head = malloc(sizeof(ELEMENTO));
		head -> d = s[0];
		tail = head;
		for(int i=0; s[i]!='\0'; i++){
			tail -> next = malloc(sizeof(ELEMENTO));
			tail = tail -> next;
			tail -> d = s[i];
		}
		tail -> next = null;
	}
	return head;
}

int conta(LINK, head){
	if(head == null)
		return 0;
	else
		return (1+conta(head -> next));
}

int conta_it(LINK head){
	int cnt = 0;
	while(head != null){
		cnt ++;
		head = head -> next;
	}
	return cnt;
}

LINK crealista(){
	char s;
	LINK head = null, tail;
	printf("vuoi inserire un nuovo elemento? [s/n]\n");
	scanf("%c", &r);
	if(r =='s'){
		head = malloc(sizeof(ELEMENTO));
		printf("inserisci un nuovo elemento\n");
		scanf("%c", &(head -> d));
		tail = head;
		printf("vuoi inserire un nuovo elemento? [s/n]\n");
		scanf("%c", &r);
		while(r == s){
			tail -> next = malloc(sizeof(ELEMENTO));
			tail = tail -> next;
		} //VAFFANCULO A GERACE
	}
}
