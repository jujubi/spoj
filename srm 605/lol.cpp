#include<iostream>
using namespace std;

struct node
{
	node *next;
	int a;
}*head;


void trav()
{
	node *curr=head;
	while(curr!=NULL)
	{
		cout<<curr->a<<" ";
		curr=curr->next;
	}

}

void inter()
{
	node *first=head;
	node *sec=first->next;
	node *third=sec->next;
	head=sec;
	while(1>0)
	{
	
		node *temp=sec->next;	
		sec->next=first;
		if(third->next==NULL)
			first->next=third;
		else
			first->next=third->next;
		first=temp;
		sec=first->next;
		third=sec->next;
		if(first==NULL || sec==NULL)
			break;
		
	}	
	
}
int main()
{
	head = new node;
	head->a=1;
	head->next=NULL;
	node *curr=head;
	curr->next = new node;
	curr=curr->next;
	curr->a=2;
	curr->next = new node;
	curr=curr->next;
	curr->a=3;
	curr->next = new node;
	curr=curr->next;
	curr->a=4;
	curr->next = new node;
	curr=curr->next;
	curr->a=5;
	curr->next = new node;
	curr=curr->next;
	curr->a=6;
	curr->next=NULL;
	trav();
	inter();
	cout<<endl;
	trav();
	return 0;
}
