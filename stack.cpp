#include<bits/stdc++.h>

using namespace std;


class Stack
{
		int top;
		int ar[4];
	
	public:
		stack()
		{
			top=-1;
			for(int i=0;i<5;i++)
			ar[i]=0;
		}
		bool isempty()
		{
			if(top==-1)return true;
			else return false;
		}
		bool isfull()
		{
			if(top==4)return true;
			
			else  return false;
		}
		
		void push(int n)
		{
			if(isfull()==true)
			{
				cout<<"Stack overflow"<<endl;
				exit(1);
			}
			else{
				top++;
				ar[top]=n;
			}
			//cout<<top<<endl;
		}
		
		int pop()
		{
			if(isempty())
			{
				cout<<"Stack underflow"<<endl;
				exit(1);
			}
			else
			{
				return ar[top];
				ar[top]=0;
				top--;
			}
		}
		
		int count()
		{
			return (top+1);
		}
		int peek(int pos)
		{
			if(pos>top)
			{
				cout<<"Value does not exists"<<endl;
				exit(1);
			}
			else
			{
				return ar[pos];
				exit(1);
			}
		}
		int change(int pos,int val)
		{
			ar[pos]=val;
		
		}
		void display()
		{
			for(int i=0;i<5;i++)cout<<ar[i]<<" ";
			
			cout<<endl;
		}
};

int main()
{
	Stack s1;
	
	int option,position,value;
	do
	{	cout<<"0.exit"<<endl;
		cout<<"1.push"<<endl;
		cout<<"2.pop"<<endl;
		cout<<"3.count"<<endl;
		cout<<"4.peek"<<endl;
		cout<<"5.change"<<endl;
		cout<<"6.isempty"<<endl;
		cout<<"7.isfull"<<endl;
		cout<<"8.display"<<endl;
		cout<<"9.clear screen"<<endl;
		
		cin>>option;
		switch(option)
		{
			case 1:
				s1.display();
				int n;
				cin>>n;
				s1.push(n);
				break;
			case 2:
				cout<<s1.pop()<<endl;
				break;
				
			case 3:
				cout<<s1.count()<<endl;
				break;
			case 4:
				int pos;
				cin>>pos;
				cout<<s1.peek(n)<<endl;
				break;
			case 5:
				int x,pos1;
				cin>>x>>pos1;
				s1.change(x,pos1);
				break;
			case 6:
				if(s1.isempty())cout<<"Stack is empty"<<endl;
				else cout<<"stack is not empty"<<endl;
				break;
			case 7:
				if(s1.isfull())cout<<"stack is full"<<endl;
				else cout<<"stack is  not full"<<endl;
				break;
			case 8:
				s1.display();
				break;
			case 9:
				system("cls");
				break;
			default:
				cout<<"wrong option"<<endl;
		}	
	}while(option!=0);
	return 0;
}
