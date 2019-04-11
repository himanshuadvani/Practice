#include<stdio.h>


void ShiftZeros(int *arr,int size)
{
	int i=0,j=size-1;
	int temp=0;
	
	for(i=0;i<size;i++)
	{
		if(j<i)
			break;
		if(arr[i]==0)
		{
			if(arr[j]==0)
			{
				j=j-1;
				i=i-1;
				continue;	
			}
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				j=j-1;
			
			
		}
		
	}
}

int main()
{
	int size=0;
	
	printf("Enter size of array: ");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter elements: \n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	ShiftZeros(arr,size);
	
	printf("After Shiffting zeros to left:\n");
	for(int i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	
	return 0;
}
