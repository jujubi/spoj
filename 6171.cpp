#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;
int main()
{
	int test;
	//cin>>test;
	scanf("%d",&test);
	vector<int> arr;
	while(test--)
	{
		int n;
		arr.clear();
		//cin>>n;
		scanf("%d",&n);
		for(int i=0;i<n;i++)	
		{
			int d;
			//cin>>d;
			scanf("%d",&d);
			arr.push_back(d);
		}
		
		int god=arr[0];
		int count=1;
		
		for(int i=1;i<n;i++)
		{
			if(arr[i]!=god)
			{
				count--;
				if(count==0)
				{
					god=arr[i];
					count=1;
				}
			}
			else
				count++;
		}

		int ct=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]==god)
				ct++;
		}
		if(ct>n/2)
			printf("YES %d\n",god);
		else
			printf("NO\n");


	}
	return 0;
}
