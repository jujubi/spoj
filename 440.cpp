#include<iostream>
#include<set>
#include<vector>
#include<queue>
#include<algorithm>
#include<utility>
#include<string>
#include<stdio.h>
#include<set>
#include<limits.h>
#include<map>
#define inf (int)1e9
using namespace std;

#define GI ({int t;scanf("%d",&t);t;})

typedef vector<pair<int,int> > graph; 
int main()
{
	int test;
	int cities;
	int neighb;
	char str[11];
	char source[11],dest[11];
	int a,b;
	//vector<vector<pair<int,int> > > arr;
	
	vector<pair<int,int> > temp;
		pair<int,int> to;
	test = GI;
	map<string,int> city_num;
	vector<int> d;
	set<int> lol;
	priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > que;

	int r;
	while(test--)
	{
		//arr.clear();
		//temp.clear();
		//city_names.clear();
		city_num.clear();
		
		scanf("%d",&cities);
		
		//arr.resize(cities+1,temp);				
		graph arr[cities+1];
		
		for(int i=0;i<cities;i++)
		{
			scanf("%s",str);
			
			//city_names.push_back(str);
			city_num[str]=i;
			//scanf("%d",&neighb);
			neighb = GI;
			for(int j=0;j<neighb;j++)
			{
				//scanf("%d %d",&a,&b);
				a=GI;
				b=GI;
				arr[i].push_back(make_pair(a-1,b));
			}
		}
	
		//scanf("%d",&r);
		r=GI;
		while(r--)
		{
			scanf("%s %s",source,dest);
			d.clear();
			d.resize(cities+1,inf);
			lol.clear();
			int st=city_num[source];
			//cout<<source<<" "<<dest<<endl;
			//cout<<"Start:"<<st<<" "<<source<<endl;	
			d[st]=0;
			
			que.push(make_pair(d[st],st));
			int curr;
			int curr_dist;
			while(que.size())
			{
				curr = que.top().second;
				curr_dist = que.top().first;
				
				//cout<<curr<<" "<<curr_dist<<endl;
				if(lol.count(curr))
				{
				//cout<<"breaking"<<endl;
				que.pop();
				continue;
				}
				d[curr]=curr_dist;
				
				lol.insert(curr);
				que.pop();		
				temp=arr[curr];
				for(int i=0;i<temp.size();i++)
				{
					to=temp[i];
					if(lol.count(to.first) == 0)
					{	que.push(make_pair(curr_dist+to.second,to.first));
					//cout<<"Pushing:"<<to.first<<" "<<to.second<<endl;
					}
					
				}				
			
			}
			//cout<<d[city_num[dest]]<<endl;
			printf("%d\n",d[city_num[dest]]);
			

		}


	}
	return 0;
}
