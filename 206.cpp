#include<iostream>
#include<vector>
#include<limits.h>
#include<stdlib.h>
#include<map>
#include<queue>
#include<utility>
using namespace std;
vector<vector<int> > arr;
map<int,map<int,int> > seen;
vector<vector<int> > ans;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		
		arr.clear();
		seen.clear();
	ans.clear();
		int a,b;
		cin>>a>>b;
		vector<int> temp;
		temp.resize(b,INT_MAX);
		ans.resize(a,temp);
		temp.clear();
		queue<pair<int,int> > que;
		for(int i=0;i<a;i++)
		{
			temp.clear();
			for(int j=0;j<b;j++)
			{
				char d;
				cin>>d;
				temp.push_back(d-48);
				if(d==49)
				{	que.push(make_pair(i,j));ans[i][j]=0;}
			}

			arr.push_back(temp);
		}

		//cout<<que.size()<<endl;
			seen.clear();
				
				while(que.size())
				{

					pair<int,int> temp;
					temp=que.front();
					que.pop();
					int x=temp.first;
					int y=temp.second;
					//cout<<x<<" "<<y<<endl;
					if(x<a-1 && ans[x][y]+1<ans[x+1][y])
					 {ans[x+1][y]=ans[x][y]+1;      que.push(make_pair(x+1,y));}
					if( y<b-1 && ans[x][y]+1<ans[x][y+1])
					 {ans[x][y+1]=ans[x][y]+1;      que.push(make_pair(x,y+1));}
					if(y>0 && ans[x][y]+1<ans[x][y-1])
					 {ans[x][y-1]=ans[x][y]+1;      que.push(make_pair(x,y-1));}
					if(x>0 && ans[x][y]+1<ans[x-1][y])
					 {ans[x-1][y]=ans[x][y]+1;      que.push(make_pair(x-1,y));}
					
				}	
					
			
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<b;j++)
			{
				cout<<ans[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
