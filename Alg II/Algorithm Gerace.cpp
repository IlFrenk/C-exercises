#include <stdio.h>

main(){
	char c;
	int i=0;
	do{
		printf("Gerace e' tonto? [s/n]\n");
		scanf("\n%c", &c);
		i++;
		i *= 2;
	}while(c != 's');
	printf("esatto. Il suo livello di peccentoddi attuale e' %d\n", i);
}
