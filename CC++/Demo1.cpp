#include<stdio.h>

int main()
{
	int size=0,temp=0;
	int i=1,j=1,count=1;
	
	printf("Enter size: ");
	scanf("%d",&size);
	
	for(i=1;i<=size;i++)
	{
		j=1;
		if(i%2==0)
		{
			count+=i-1;
			temp=count;
		}
		while(j<=i)
		{
			printf("%d\t",count);
			j++;
			if(i%2==0)
				count--;
			else
				count++;
			
		}
		
		if(i%2==0)
			count=temp+1;
		printf("\n");
	}
}
