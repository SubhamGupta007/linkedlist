#include<bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *link;
};

typedef struct node node;

node *head=NULL;

void create_head()
{
    if(head!=NULL)
    {
        cout<<"head node exists"<<endl;
    }
    else{
        int elem;
        cout<<"enter the element"<<endl;
        cin>>elem;
        node *ptr=(node*) malloc(sizeof(node));
        ptr->data=elem;
        ptr->link=NULL;

    }
}
void add_at_end()
{

    node *tmp=head;
    while(tmp->link!=NULL)
    {
        tmp=tmp->link;
    }
    int elem;
    cout<<"enter the element"<<endl;
    cin>>elem;
    node *ptr=(node*) malloc(sizeof(node));
    ptr->data=elem;
    ptr->link=NULL;
    tmp->link=ptr;
}
void reverse_node()
{
    //finding mid node
    node *tmp1=head;
    node *tmp2=head;
    while(tmp2!=NULL)
    {
        tmp1=tmp1->link;
        tmp2=tmp2->link;
        tmp2=tmp2->link;
    }
    //reversing after the mid node;
    node *ptr=tmp1;
    ptr=ptr->link;
    node *ptr1=ptr;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    tmp1->link=ptr;
    ptr1->link=NULL;

}
void print()
{
    node *ptr=(node*) malloc(sizeof(node));
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->link;
    }
    cout<<endl;
}
void recur_main()
{
    int ch;
    cout<<"enter your choice"<<endl;
    cout<<"1.create head node"<<endl;
    cout<<"2.add at start"<<endl;
    cout<<"3.reverse_from_mid_node"<<endl;
    cout<<"4.print"<<endl;
    cin>>ch;
    switch(ch)
    {
    case 1:
        create_head();
        break;
    case 2:
        add_at_end();
        break;
    case 3:
        reverse_node();
        break;
    case 4:
        print();
        break;
    }
    cout<<"do you want to continue 1 or 0"<<endl;
    int ch1;
    cin>>ch1;
    if(ch1==1)
        recur_main();


}
int main()
{
    recur_main();
}
