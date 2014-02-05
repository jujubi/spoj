#include<iostream>
#include<queue>
#include<utility>
#include<map>
using namespace std;
int main()
{
	vector<vector<char> > arr;
	vector<char> temp;
	pair<int,int> start;
	pair<int,int> end;
	map<int,map<int,int> > seen;
	while(1>0)
	{
		seen.clear();
		arr.clear();
		temp.clear();
		int w,h;
		cin>>w>>h;
		if(w==0 && h==0)
			break;
		temp.resize(w,'0');
		arr.resize(h,temp);
		
		for(int i=0;i<h;i++)
		{
			for(int j=0;j<w;j++)
			{
				char d;
				cin>>d;
				arr[i][j]=d;
				if(d=='S')
				{	start.first=i;start.second=j;}
				else if(d=='D')
				{	end.first=i;end.second=j;arr[i][j]='0'-48;}
				else if(d!='X')
					arr[i][j]=d-48;
				
			}
		}


		queue<pair<pair<int,int>,int> > que;
		que.push(make_pair(start,0));
		seen[start.first][start.second]=0;
		while(que.size())
		{
			
			pair<pair<int,int>,int> curr = que.front();
			que.pop();
			int x = curr.first.first;
			int y=curr.first.second;

			
			
			
			//cout<<x<<" "<<y<<" "<<curr.second<<endl;
			//Check if Dest then continue
			if(make_pair(x,y) == end)
				continue;
			if(x<h-1)
			{
				if(arr[x+1][y]!='X' && arr[x+1][y]!='S')
				{
					if(seen[x+1][y]==0 || curr.second+arr[x+1][y] < seen[x+1][y])
					{
						que.push(make_pair(make_pair(x+1,y),curr.second+arr[x+1][y]));
						seen[x+1][y]=curr.second+arr[x+1][y];
					}	
					
				
						
				}
		
		
			}


			if(x>0)
			{
				if(arr[x-1][y]!='X' && arr[x-1][y]!='S')
				{
					if(seen[x-1][y]==0 || curr.second+arr[x-1][y] < seen[x-1][y])
					{	que.push(make_pair(make_pair(x-1,y),curr.second+arr[x-1][y]));	
						seen[x-1][y]=curr.second+arr[x-1][y];
					}
					
					
						
				}
		
		
			}

			if(y<w-1)
			{
				if(arr[x][y+1]!='X' && arr[x][y+1]!='S')
				{
					if(seen[x][y+1]==0 || curr.second+arr[x][y+1] < seen[x][y+1])
					{	que.push(make_pair(make_pair(x,y+1),curr.second+arr[x][y+1]));	
						seen[x][y+1]=curr.second+arr[x][y+1];
					}
					
							
				}
		
		
			}

			if(y>0)
			{
				if(arr[x][y-1]!='X' && arr[x][y-1]!='S')
				{
					if(seen[x][y-1]==0 || curr.second+arr[x][y-1] < seen[x][y-1] )
					{	que.push(make_pair(make_pair(x,y-1),curr.second+arr[x][y-1]));	
						seen[x][y-1]=curr.second+arr[x][y-1];
					}
					
						
				}
		
		
			}


			/*x-1,y
			x,y+1
			x,y-1*/
			
			
		}

		cout<<seen[end.first][end.second]<<endl;

	}
return 0;
}
