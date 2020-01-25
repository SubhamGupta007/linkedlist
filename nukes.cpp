#include<bits/stdc++.h>
#include<vector>

using namespace std;

vector<int>v;
void change(vector<int>v,int i,int n,int k)
{
   v[i]=v[i]+1;
   if(i==(k-1) && v[i]>n)
   {
    v[i]=0;
   }
   else if(v[i]>n)
    {
       v[i]=0;
       i++;
       change(v,i,n,k);
    }
    cout<<"printing vector"<<endl;
     for(int i=0;i<k;i++)
    {
        cout<<v[i]<<" ";
    }
    
   
}
int main()
{
    int a,n,k;
    cin>>a>>n>>k;
    for(int i=0;i<k;i++)
    {
        v.push_back(0);
    }
    for(int i=0;i<a;i++)
    {
        change(v,0,n,k);
        cout<<"printing vector"<<endl;
        for(int i=0;i<k;i++)
        {
            cout<<v[i]<<" ";
        }
    }
    for(int i=0;i<k;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
    
}