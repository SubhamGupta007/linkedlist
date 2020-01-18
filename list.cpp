#include<bits/stdc++.h>
#include<list>

using namespace std;

void push(list<int>l)
{
    int elem;
    cin>>elem;
    l.push_back(elme);
}
void pop(list<int>l)
{
    if(l.empty()==1)
    {
        cout<<"list is empty"<<endl;
    }
    else
        l.pop_back();
}
void reverse(list<int>l)
{
    list<int>::iterator it;
    int c=0;
    //finding mid element
    for(it=l.begin(); it!=l.end(); it=it+2)
    {
        c++;
    }
    //reversing the elements
    list<int>::iterator it1;
    it1=l.begin();
    advance(it1,c);
    list<int>::iterator it2;
    it2=l.end();
    l=l.size();
    while(c<=l)
    {
        swap(it1,it2);
        it2--;
        it1++;
        l--;
        c++;
    }
}
void print(list<int>l)
{
    list<int>::iterator it;
    for(it=l.begin(); it!=l.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int>l;
    int ch;
    cout<<"1.push element"<<endl;
    cout<<"2.pop element"<<endl;
    cout<<"3.reverse from mid"<<endl;
    cout<<"4.print"<<endl;
    switch(ch)
    {
    case 1:
        push(l);
        break;
    case 2:
        pop(l);
        break;
    case 3:
        reverse(l);
        break;
    case 4:
        print(l);
        break;
    }
    int ch1;
    cout<<"do u want to continue 1 or 0"<<endl;
    cin>>ch1;
    if(ch==1)
        main();

    return 0;
}

