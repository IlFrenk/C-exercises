#include<stdio.h>
#include<stdbool.h>
main()
{
	struct data
	{
		int giorno;
		int mese;
		int anno;
	};
	struct data oggi,domani;
	const int giornipermese[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("inserisci la data di oggi: \n");
	scanf("%d %d %d",&oggi.giorno,&oggi.mese,&oggi.anno);
	if(oggi.giorno!=giornipermese[oggi.mese-1])
	{
		domani.giorno=oggi.giorno+1;
		domani.mese=oggi.mese;
		domani.anno=oggi.anno;
	}
	else
	{
		if(oggi.mese==12)
		{
			domani.giorno=1;
			domani.mese=1;
			domani.anno=oggi.anno+1;
		}
		else
		{
			domani.giorno=1;
			domani.mese=oggi.mese+1;
			domani.anno=oggi.anno;
		}
	}
	printf("domani e' il %d %d %d \n",domani.giorno,domani.mese,domani.anno);
}
