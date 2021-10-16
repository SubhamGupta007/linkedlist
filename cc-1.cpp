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
    	
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> v(n,0);
        map<int,int> m;
        map<int,int>m1;
        vector<int> v1(n,0);
        for(int i=0;i<n;i++){
        	v[i]=s[i]-'0';
        	v1[i]=v[i]+i;
        	m1[v1[i]]++;
        	v[i]=v[i]-i;
        	m[v[i]]++;
		}
		ll c=0;
		for(auto it=m.begin();it!=m.end();it++){
			if(it->second>1){
				int x=it->second;
				c+=(x*(x-1))/2;
			}
		}
		for(auto it=m1.begin();it!=m1.end();it++){
			if(it->second>1){
				int x=it->second;
				c+=(x*(x-1))/2;
			}
		}
		cout<<c<<endl;
    }
    return 0;
} 
