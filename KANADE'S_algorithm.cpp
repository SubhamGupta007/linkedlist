#include<bits/stdc++.h>
#define lli long long int
#define ll long long 
#define dd double
#define endl "\n"
#define mod 1000000007
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define limit 1000000000000000000
const double pi=3.14159265358;

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,max_so_far=-1,max_end_here=0;
		cin>>n;
		lli ar[n];
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		for(int i=0;i<n;i++)
		{
			max_end_here+=ar[i];
			if(max_end_here<0)max_end_here=0;
			else if(max_so_far<max_end_here)
			max_so_far=max_end_here;
			
		}
		if(max_so_far==-1)
		{
			sort(ar,ar+n);
			cout<<ar[n-1]<<endl;
		}
		else
		cout<<max_so_far<<endl;
	}
}
