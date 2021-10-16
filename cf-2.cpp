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


void solve(string s,int &ans,int c,int b,map<string,int> &m){
	ll num=0;
	int i=0;
	while(i<s.size()){
		num=num*10 +(s[i]-'0');
		i++;
	}
	//cout<<num<<" num"<<endl;
	if(num%25==0){
		ans=min(ans,c);
		m[s]=c;
		return;
	}
	for(int i=b;i<s.length();i++){
		if(m.find(s)!=m.end()){
			ans=min(ans,m[s]);
		}
		else
		solve(s,ans,c,b+1,m);
		c++;
		s=s.substr(0,b)+s.substr(b+1);
		int tem=0;
		if(b==0){
			while(s[tem]=='0'){
			tem++;
		}
		}
		if(m.find(s.substr(tem))!=m.end()){
			ans=min(ans,m[s.substr(tem)]);
		}
		else
		solve(s.substr(tem),ans,c,0,m);
	}
}
 
int main()
{
    //fast
    lli t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s="";
        int ans=INT_MAX;
        while(n){
        	int x=n%10;
        	s+=to_string(x);
        	n/=10;
		}
		map<string,int> m;
		reverse(s.begin(),s.end());
		solve(s,ans,0,0,m);
		cout<<ans<<endl;
    }
    return 0;
} 
