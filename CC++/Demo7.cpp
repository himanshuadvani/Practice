#include<iostream>
using namespace std;

void Descending(int arr1[],int arr2[],int arr3[],int i,int j)
{
	int count=0;
	int length=i+j;
	i-=1;
	j-=1;
	while(i>=0 || j>=0)
	{
		printf("i:%d, j: %d\n",i,j);
		if(arr1[i]>=arr2[j])
		{
			arr3[count]=arr1[i];
			i=i-1;
		}
		
		else
		{
			arr3[count]=arr2[j];
			j=j-1;
		}
		count=count+1;
		}
	
	for(i=0;i<length;i++)
	{
		printf("%d\t",arr3[i]);
	}
	
	

	
	
	
}

int main()
{
	int arr1[]={1,3,15,15,23,65,100,142,160};
	int arr2[]={-2,3,4,15,24,54,60,101,105,150};

	int arr3[(sizeof(arr1)/sizeof(arr1[0]))+(sizeof(arr2)/sizeof(arr2[0]))];
	
	
	Descending(arr1,arr2,arr3,(sizeof(arr1)/sizeof(arr1[0])),(sizeof(arr2)/sizeof(arr2[0])));
	return 0;
}
