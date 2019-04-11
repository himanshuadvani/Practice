#include<iostream>
using namespace std;
#include<malloc.h>

struct Node
{
	int data;
	Node* next;	
}*head=NULL;



void Display();
void InsertFirst(int);
void InsertLast(int);

void Display()
{
	

		Node* temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<"\t";
			temp=temp->next;
		}
		
		cout<<"\n";
	
}


void InsertFirst(int data)
{
	cout<<"Insert First\n";
	Node *newn=(Node*)malloc(sizeof(Node));
	newn->data=data;
	newn->next=NULL;
	
	if(head==NULL)
	{
		head=newn;
	}
	
	else
	{
		Node *temp=head;
		head=newn;
		newn->next=temp;
		
	}
}


void InsertLast(int data)
{
	cout<<"Insert Last\n";
	Node *newn=(Node*)malloc(sizeof(Node));
	newn->data=data;
	newn->next=NULL;
	
	if(head==NULL)
	{
		head=newn;
		
	}
	else
	{
		Node*temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
	}


}

int DeleteFirst()
{
	cout<<"Delete First\n";
	if(head==NULL)
	{
		return -1;
	}
	else
	{
		Node *temp=head;
		head=head->next;
		free(temp);
		return 1;
	}
}

int DeleteLast()
{
	cout<<"Delete Last\n";
	if(head==NULL)
	{
		return -1;
	}
	else
	{
		Node *temp=head;
		while(temp->next->next!=NULL)
		{
					temp=temp->next;
		}
		
			free(temp->next);
			temp->next=NULL;	
			return 1;
		
	}
}

int main()
{
	int iData=0,ch=0;
	char x='y';
	do{
		
		cout<<"\n===>MENU<===\n1.Insert Node at first in Linked List\n2.Insert Node at last in Linked List\n3.Delete Node at first in Linked List\n4.Delete Node at last in Linked List\nEnter your choice: ";
		cin>>ch;
		switch(ch)
		{
		case 1:cout<<"Enter Data: ";
				cin>>iData;
				InsertFirst(iData);
				Display();
				break;
				
				
		case 2:cout<<"Enter Data: ";
				cin>>iData;
				InsertLast(iData);
				Display();
				break;
				
				
		case 3:	DeleteFirst();
				Display();
				break;
				
				
		case 4:	DeleteLast();
				Display();
				break;
				
		 default:cout<<"Invalid choice...";
				break;
				
		}
	cout<<"Do you want to continue: y/n?";
	cin>>x;
	}while(x=='y');
	
	

	return 0;
}
