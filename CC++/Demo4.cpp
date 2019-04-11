#include<iostream>
using namespace std;

int Difference(int *arr,int size,int seed1,int seed2)
{
	int res=size;
	int i=0;
	int temp=0;
	
	for(i=0;i<size-1;i++)
	{
		if(arr[i]==seed1)
		{
			temp=i;
			//continue;
		}
		if(arr[i]==seed2)
		{
			if(i-temp<res)
			{
				res=i-temp;
			}
		}
	}
	
	return res;
	
}

	


int main()
{
	int seed1=0,seed2=0,size=0;
	cout<<"Enter size of array: ";
	cin>>size;
	int arr[size];
	
	cout<<"\nEnter elements: ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Enter seed1: ";
	cin>>seed1;
	cout<<"Enter seed2: ";
	cin>>seed2;
	
	int ret=Difference(arr,size,seed1,seed2);
	cout<<"Difference between "<<seed1<<" and "<<seed2<<" is "<<ret;
	
	return 0;
}
