#include <stdio.h>

main()
{
	
	
	int  yildizSayisi=1,ucgen_Noktasi;
	
	int Bosluk=9,i,j;
	
	printf(" ucgen icin nokta sayisi girin \n");
	
	scanf("%d",&ucgen_Noktasi);
	for(i=0;i<ucgen_Noktasi;i++)
	{
		
		
		for(j=0;j<Bosluk;j++)
		{
			printf(" ");
		}	
			for(j=0;j<yildizSayisi;j++)
			{
				printf("*");	
			}
			
			printf("\n");
			yildizSayisi+=2;
			Bosluk--;
	}
	
}
