#include<iostream>
using namespace std;

int main()
{
	int i=0,j=0,count=1,row=0;
	int temp=row;
	
	printf("Enter size of matrix: ");
	scanf("%d",&row);
	int arr[row][row*2]={0};
	

	for(i=0;i<row;i++)
	{
		printf("\n");
		for(j=0;j<temp;j++)
		{
			arr[i][j]=count;
			count++;
			
		}
		temp--;
		
	}

/*
	for(i=row-1;i>=0;i--)
	{
		j=0;
		temp=0;
		while(j<2*row)
		{
			if(arr[i][j]==0)
			{
				break;
			}
		}
		
		printf("j: %d",j);
		while(temp<=j)
		{
			arr[i][j]=count;
			count++;
			temp++;
			
			}
			
			
	}
	*/
	for(int i=0;i<row;i++)
	{
		for(j=0;j<2*row;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
