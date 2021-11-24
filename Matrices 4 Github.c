#include<stdio.h>
#include<stdlib.h>

int main()
{
	int tabla[3][12],suma=0,sum1=0,i=0,v=0;
	for(int i=0;i<3;i++)
	{
		for(int v=0;v<12;v++)
		{
			printf("El conjunto de la linea %d y el grupo %d es: \n",i+1,v+1);
			scanf("%d",&tabla[i][v]);
			
		
		}
		
	
	}
	system("cls");
	
	for(int i=0;i<3;i++)
	{
		suma=0;
		for(int v=0;v<12;v++)
		{
			printf("El conjunto de la linea %d y el grupo %d es de:%d \n",i+1,v+1,tabla[i][v]);
			suma=suma +tabla[i][v];
			
		
		}
		printf("\n");
		sum1=sum1+suma;
		printf("El conjunto de la linea %d es de: %d\n",i+1,suma);
		
	
	}
	printf("El conjunto total es de: %d",sum1);
	return 0;
}
