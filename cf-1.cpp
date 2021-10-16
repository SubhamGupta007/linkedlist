#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define ulli unsigned long long int
#define lli long long int
#define ll long long 
#define dd double
#define endl "\n"
#define mod 1000000007
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define limit 1000000000000000000
 
 
using namespace std;
 
int main()
{
    fast
    lli t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
       int tem=max(a,max(b,c));
       if(tem-a>0){
       	cout<<tem-a+1<<" ";
	   }
	   else if(tem-a==0&&(a==b||a==c)){
	   	cout<<1<<" ";
	   }
	   else if(tem-a==0){
	   	cout<<0<<" ";
	   }
	   if(tem-b>0){
       	cout<<tem-b+1<<" ";
	   }
	   else if(tem-b==0&&(a==b||b==c)){
	   	cout<<1<<" ";
	   }
	   else if(tem-b==0){
	   	cout<<0<<" ";
	   }
	   if(tem-c>0){
       	cout<<tem-c+1<<" ";
	   }
	   else if(tem-c==0&&(c==b||a==c)){
	   	cout<<1<<" ";
	   }
	   else if(tem-c==0){
	   	cout<<0<<" ";
	   }
	   cout<<endl;
        
    }
    return 0;
} 
