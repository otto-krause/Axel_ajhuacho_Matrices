#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num[20][6],suma=0,prom=0;
	
	for(int i=0;i<20;i++)
	{
		for(int v=0;v<6;v++)
		{
			printf("Ingresar el promedio de habitantes del departamento %d del piso %d: ",v+1,i+1);
			scanf("%d",&num[i][v]);
			
		}
		
	}
	system("cls");
	for(int i=0;i<20;i++)
	{
		for(int v=0;v<6;v++)
		{
			suma=suma+num[i][v];
			prom=suma/6;
			
		}
		printf("Hay un promedio de %d personas en el piso %d",i+1,prom);
		
		printf("\n");
		
	}
	printf("En total hay unos %d de personas",suma);
	return 0;
}
