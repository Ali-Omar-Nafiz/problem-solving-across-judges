#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;cin>>n;
	int k=0,j=0;
	vector<int>v(n);
	while(n--)
	{
		cin>>v[n];
		k+=v[n];
	}
	sort(v.begin(),v.end());
	int ans=0;
	while(j<=k)
	{
		ans++;
		j+=v.back();
		k-=v.back();
		v.pop_back();
	}
	cout<<ans;
	return 0;
}