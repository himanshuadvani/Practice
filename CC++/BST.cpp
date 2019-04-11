#include<stdio.h>
#include<malloc.h>

struct Node
{
	Node* left;
	int data;
	Node* right;	
};

void Display();

Node* root=NULL;
Node *temp;


int InsertData(int data)
{
	printf("Inside Insertdata... %p\n",temp);
	int flag=0;
	Node *temp=root;
	Node *newn=(Node*)malloc(sizeof(Node));
	newn->data=data;
	newn->right=NULL;
	newn->left=NULL;
	
	if(temp==NULL)
	{
		temp=newn;
		flag=1;
		
	}
	
	else
	{
	
	while(temp->right!=NULL && temp->right!=NULL)
	{
	if(data>temp->data)
	{
			temp=temp->right;	
	}
	else if(data<temp->data)
	{
			temp=temp->left;
	}
	
	}
	



	if(newn->data<temp->data)
	{
		temp->left=newn;
		flag=1;
	}
	else
	{
			temp->right=newn;
			flag=1;
	}
		}
	
	printf("After inserting: display() %p\n",temp);
	
	//Display();
	return flag;
}

void Display()
{
	
	
		
	if(temp->left!=NULL)
	{
	
		temp=temp->left;
		Display();	
	}
	
	printf("Data: %d-->",temp->data);
	if(temp->right!=NULL)
	{

		temp=temp->right;
		Display();
	}
	
}

int main()
{
	int data=0,result=0;
	printf("\nEnter data to be inserted in BST: ");
	scanf("%d",&data);
	result=InsertData(data);
	
	printf("\nEnter data to be inserted in BST: ");
	scanf("%d",&data);
	result=InsertData(data);
	
	printf("\nEnter data to be inserted in BST: ");
	scanf("%d",&data);
	result=InsertData(data);
	
	printf("\nEnter data to be inserted in BST: ");
	scanf("%d",&data);
	result=InsertData(data);
	
	Display();
}
