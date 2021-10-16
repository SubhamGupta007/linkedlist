#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* next;
};
struct node* head;

void insert(int x)
{
	node* temp=(node*)malloc(sizeof(node));
	temp->data=x;
	temp->next=NULL;
	if(head!=NULL)temp->next=head;
	head=temp;
}
void insertat(int x,int pos)
{
	if(pos==1)
	{
		insert(x);
	}
	else
	{
		node*temp=head;
		int cnt=1;
		while(temp!=NULL)
		{
			cnt++;
			if(cnt==pos)
			{
				node* temp1=new node();
				temp1->data=x;
				temp1->next=temp->next;
				temp->next=temp1;
			}
			temp=temp->next;
		}
	}
}
void del(int pos)
{
	node* temp=head;
	int cnt=1;
	if(pos==1)
	{
		head=temp->next;
		free(temp);
		return ;
	}
	for(int i=0;i<(pos-2);i++)
	temp=temp->next;
	
	node* temp1=temp->next;
	temp->next=temp1->next;
	free(temp1);
}
void print()
{
	node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
void printrec(node* temp)
{
	if(temp==NULL)
	{
		cout<<endl;
		return;
	}
	cout<<temp->data<<" ";
	printrec(temp->next);
}
void revlist()
{
	node* temp=head;
	node* prev=NULL;
	node* next;
	while(temp->next!=NULL)
	{
		next=temp->next;
		temp->next=prev;
		prev=temp;
		temp=next;
	}
	temp->next=prev;
	head=temp;
}

void revprint(node* temp)
{
	if(temp==NULL)
	{
		cout<<endl;
		return;
	}
	revprint(temp->next);
	cout<<temp->data<<" ";
}
int main()
{
	head=NULL;
	
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		insert(x);
		print();
		//cout<<endl;
	}
	node* temp=head;
	printrec(temp);//print using recursion
	revprint(temp);//print in reverse order using recursion
	//int num,pos;
	//cin>>num>>pos;
	//insertat(num,pos); //insert call
	//print();
	//cout<<endl;
	//int pos1;
	//cin>>pos1;
	//del(pos1);  // delete call
	//print();
	//revlist(); // reverse using iterative method
	//print();
	
	
}
