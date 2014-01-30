#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

bool fn(pair<int,int> a,pair<int,int> b)
{
	if(a.first<b.first)
		return 0;
	if(a.first==b.first)
	{
		if(a.second>b.second)
			return 0;
	}
	return 1;
}
vector<pair<int,int> > arr;
vector<vector<int> > ans;
	vector<int> l;
int main()
{
	int n;
	cin>>n;
	arr.clear();
	ans.clear();
	l.clear();
		int a,c;
	char b;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b>>c;
		arr.push_back(make_pair(a,c));
	}
	sort(arr.begin(),arr.end(),fn);
	
	//for(int i=0;i<n;i++)
		//cout<<arr[i].first<<"/"<<arr[i].second<<endl;
	
	ans.resize(n+10,l);
	for(int i=0;i<n;i++)
	{
				int num=arr[i].first;
		int den=arr[i].second;
		if(den==2)
			num=2;
		
		for(int j=0;j>=0;j++)
		{
			if(j>=ans.size())
			{
				break;
			}
			int flag=0;
			if((4-ans[j].size())>=num)
			{
				flag=1;
				for(int k=1;k<=num;k++)
					ans[j].push_back(1);
			}
		if(flag==1)
			break;
		}

		/*cout<<"----------------------"<<endl;
		for(int k=0;k<=i;k++)
		{
			if(ans.size()<=k)
				break;
			for(int j=0;j<ans[k].size();j++)
				cout<<ans[k][j]<<" ";
			cout<<endl;
		}
		cout<<"-----------------------"<<endl;
*/

	}

	int ct=1;
	for(int i=0;i>=0;i++)
	{
		//cout<<i<<" "<<ans[i].size()<<endl;
		if(ans[i].size()==0 || i>=ans.size())
			break;
		ct++;
	}
	cout<<ct<<endl;
	
return 0;
}
