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
        int n,k;
        cin>>n>>k;
        vector<int> v(k,0);
        map<int,int> m;
        for(int i=0;i<k;i++){
        	cin>>v[i];
        	m[v[i]]++;
		}
		int c=0;
		int r=0;
		int cat=0;
		for(auto it=m.rbegin();it!=m.rend();it++){
			int dist=n-it->first;
			if(cat>=it->first){
				continue;
			}
			if(dist*it->second>it->first-cat){
				double db=(it->first-cat)/(dist+0.0);
				if(db==(int)db);
				else{
					db++;
				}
				r+=(int)db;
				cat=it->first;
			}
			else{
				cat+=dist*it->second;
				r+=it->second;
			}
		}
		cout<<r<<endl;
    }
    return 0;
} 
