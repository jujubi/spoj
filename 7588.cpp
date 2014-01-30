#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{

	vector<vector<int> > arr;
	int n,m;
	cin>>n>>m;
	vector<int> temp;
	for(int i=0;i<n;i++)
	{
		temp.clear();
		for(int j=0;j<m;j++)
		{
			int d;
			cin>>d;
			temp.push_back(d);
		}
		arr.push_back(temp);
	}

	vector<vector<int> > seen;
	temp.clear();
	temp.resize(m,-1);
	seen.resize(n,temp);

	for(int i=0;i<m;i++)	
		seen[0][i]=arr[0][i];
	
	int gogo;
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{	
			int ans=seen[i-1][j];
			if(j>0)
				ans=min(ans,seen[i-1][j-1]);
			if(j<m-1)
				ans=min(ans,seen[i-1][j+1]);
			seen[i][j]=ans+arr[i][j];
			if(i==n-1)
			{
				if(j==0)
					gogo=ans;
				else
					gogo=min(gogo,seen[i][j]);
			}
		}
	}

	cout<<gogo<<endl;
	return 0;
}

