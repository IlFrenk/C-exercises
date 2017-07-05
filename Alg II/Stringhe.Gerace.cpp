/* Le stringhe sono array di tipo char.
\0 è il marcatore di fine stringa

"abc" è un array di caratteri di dimensione 4
"abc"[0] ha il valore 'a'
"abc"[1] ha il valore 'b'
"abc"[3] ha il valore \0

char *p = "abcde"  ->  []->[a][b][c][d][e][\0]
					   p	celle del vettore
					   
char s[] = "abcde"  ->  s = [a][b][c][d][e][\0]
*/

#include <stdio.h>
#include <ctype.h>

int word_cnt(char *s){
	int cnt = 0;
	while(*s != '\0'){
		while(isspace(*s)){
			s++; // all'inizio s punta al primo carattere, con s++ punta al carattere successivo; finché ci sono caratteri (cioè finché non incontra \0)
		}
		if(*s != '\0'){
			cnt ++;
			while(!isspace(*s) && s != '\0'){
				s++;
			}
		}
	}
	return cnt;
}

main(){
	char s[3]={'e', ' ', 'r'};
	printf("%d", word_cnt(s));
	return 0;
}
