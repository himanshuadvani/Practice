#include<stdio.h>

int main()
{
	int row=0,i=0,j=0;
	printf("Enter size of matrix: ");
	scanf("%d",&row);
	int arr[row];
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<row;j++)
		{
			if(i!=0 && i!=row-1 && j==row/2)
			{
				printf("%d ",i);
			}
			else
				printf("%d ",row);
			if(j+1!=row)
			{
				printf("* ");
			}
		}
		printf("\n");
	}
	
	return 0;
}
