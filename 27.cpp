#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<stdio.h>
#include<string>
using namespace std;
map<string,int> god;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n;
		cin>>n;
		god.clear();
		for(int i=0;i<n;i++)
		{
		
		string a1,a2,a3,a4,a5,a6;
		cin>>a1>>a2>>a3>>a4>>a5>>a6;
		string pops=a1+" "+a2+" "+a3+" "+a4+" "+a5+" "+a6;
		god[pops]++;
		
		}
		
		map<string,int>::iterator it;
		for(it=god.begin();it!=god.end();it++)
		{
			string lol = it->first;
			
			printf("%s %d\n",lol.c_str(),it->second);
		}
		
	if(test!=0)
		printf("\n");
	}
	return 0;
}
