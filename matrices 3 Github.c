#include <stdio.h>
#include <stdlib.h>
int main()
{
	int tabla[2][3]={{9,4,2},{8,20,5}};
	int i,v,mayor,menor,sumar = 0 ;
	printf("La Matriz no modificada:\n");
	for(i=0;i<2;i++)
	{
		for(v=0;v<3;v++)
		{
			printf("%d ",tabla[i][v]);
		}
		printf("\n");
	}
	printf("\nMatriz Modificada:\n");
	for(i=0;i<=2;i++)
	{
		tabla[0][i]=tabla[0][i] * 4;
	}
	for(v=0;v<2;v++)
	{
		tabla[v][2]=tabla[v][2] * 3;
	}
	for(i=0;i<=1;i++)
	{
		for(v=0;v<3;v++)
		{
			printf("%d ",tabla[i][v]);
		}
		printf("\n");
	}
	mayor = tabla [0][0];
	
	for(i=0;i<=1;i++)
	{
		
		for(v=0;v<3;v++)
			
		{
			if(tabla[i][v] > mayor)
				
			{
				mayor=tabla[i][v];
			}
		}
		printf("\n");
	}
	printf("El valor máximo de los elementos en la matriz modificada es: %d",mayor);
	menor = mayor;
	for(i=0;i<=1;i++)
	{
		for(v=0;v<3;v++)
		{
			if(tabla[i][v]<menor)
				
				menor=tabla[i][v];
		}
		printf("\n");
	}
	printf("El valor minimo de los elementos en la matriz modificada es: %d\n\n",menor);
	for(i=0;i<=1;i++)
	{
		for(v=0;v<3;v++)
		{
			sumar=sumar+tabla[i][v];
		}
	}
	printf("La suma de los elementos de la matriz es: %d\n",sumar);
	return 0;
}


