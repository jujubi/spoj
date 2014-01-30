#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<vector<int> > arr;
vector<vector<int> > inp;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n,m;
		cin>>n>>m;
		arr.clear();
		vector<int> tem;
		tem.resize(m,0);
		arr.resize(n,tem);
		inp.clear();
		for(int i=0;i<n;i++)
		{
			vector<int> g;
			for(int j=0;j<m;j++)	
			{
				int d;
				cin>>d;
				g.push_back(d);
			}
			inp.push_back(g);
		}
		
		for(int i=0;i<m;i++)
			arr[0][i]=inp[0][i];

		for(int i=1;i<n;i++)
		{
			
			for(int j=0;j<m;j++)	
			{
				arr[i][j]=arr[i-1][j];
				if(j>0)
					arr[i][j]=max(arr[i][j],arr[i-1][j-1]);
				if(j<m-1)
					arr[i][j]=max(arr[i][j],arr[i-1][j+1]);
				arr[i][j]+=inp[i][j];	
				
			}
		
		}
	
		int ans=arr[n-1][0];
		for(int i=0;i<m;i++)
			ans=max(ans,arr[n-1][i]);

		cout<<ans<<endl;
	}
	return 0;
}
