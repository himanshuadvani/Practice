#include<stdio.h>

int main()
{

	int split=0;
	int arr[]={1,2,3,4,5,6,7,8};
	int i=0,j=4,k=1;
	int flag=0,temp=0;
	int num=8/4;
	
	
	printf("Before split:\n");
	for(int x=0;x<8;x++)
	{
		printf("%d\t",arr[x]);
	}
	
	
	
	while(i<8 && k<=num)
	{		
		if(k%2==1)
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;	
		}
			i++;
			j++;
		if(i%4==0)
		{
			k++;
		}
	}
	
	
	printf("\nAfter split:\n");	
	for(int x=0;x<8;x++)
	{
		printf("%d\t",arr[x]);
	}
	
	return 0;
}
