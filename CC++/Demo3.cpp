#include<stdio.h>

int main()
{
	int i=0,j=0,k=0,row=0,col=0;
	
	int temp=0;
	
	printf("Enter number of rows and columns: ");
	scanf("%d",&row);
	int div=row/2;
	printf("Pyramid.\n");
	while(i<row && div>0)
	{
		while(k<div)
		{
				printf("*\t");
				k++;			
		}
/*		while(j<2*i-1)
		{
			printf("*\t");
			j++;
		}
*/		
		div--;
		printf("\n");
		i++;
		k=0;
		
	}
			

	
	
	return 0;
}
