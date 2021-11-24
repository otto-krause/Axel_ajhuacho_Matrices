#include <stdio.h>
#include <stdlib.h>
int main()
{
	int tabla [2][3] = {{2,7,9}, {5,1,2}};
	
	int i,v;
	
	for(i=0;i<2;i++)
		
	{
		
		
		for(v=0;v<3;v++)
		{
			printf("%d",tabla[i][v]);
		}
		
		printf("\n");
	}
	return 0;
}

