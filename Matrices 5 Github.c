#include<stdio.h>
int main()
{
	int num[100][3],i,v,h;
	for(int i=0;i<100;i++)
	{
		for(int v=0;v<3;v++)
		{
			printf("Ingrese la nota del %d trimestre del alumno %d: ",v+1,i+1);
			scanf("%d",&num[i][v]);
		
		}
	
	}
	("cls");
	do{
		printf("Quiere modificar alguna nota?\n");
		printf("1=Si quiero modificar | 2=No quiero modificar \n");
		scanf("%d",&h);
		if(h!=2)
		{
			printf("Ingresar el alumno:");
			scanf("%d",&i);
			printf("Ingresar el trimestre:");
			scanf("%d",&v);
			printf("Ingresar la nota:");
			scanf("%d",&num[i][v]);
		
		}
	
	}
	while(h!=2);
}
