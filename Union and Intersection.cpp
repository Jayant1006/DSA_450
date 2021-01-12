#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n],b[n];
	
	map<int,int> mp;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		mp[a[i]]++;
	}
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
		mp[b[i]]++;
	}
	
	cout<<mp.size()<<endl;
	vector<int> ans;
	for(auto i=mp.begin();i!=mp.end();i++)
	{
		if(i->second>1)
		{
			ans.push_back(i->first);
		}
	}
	cout<<ans.size();
}
