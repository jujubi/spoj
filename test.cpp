#include<iostream>
#include<queue>
#include<utility>
using namespace std;

int main()
{
	priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > que;
	que.push(make_pair(10,12));
	que.push(make_pair(3,2));
	
	cout<<que.top().first;

	return 0;
}
