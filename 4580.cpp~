#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{

	long num;
	//cin>>num;
	scanf("%ld",&num);
	vector<long> arr;
	for(int i=0;i<num;i++)
	{
		long d;
		//cin>>d;
	scanf("%ld",&d);
		arr.push_back(d);
	}

	vector<long> sums;
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<num;j++)
		{
			sums.push_back(arr[i]+arr[j]);
			
		}
	}
	vector<long> rights;
	for(long i=0;i<sums.size();i++)
	{
		for(int j=0;j<num;j++)
		{
			if(arr[j]!=0)
				rights.push_back(sums[i]*arr[j]);
		}
	}
	sort(rights.begin(),rights.end());
	
	int a,b,c;
	long long ct=0;
	long h;
	vector<long>::iterator s1,s2;
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<num;j++)
		{
			for(int k=0;k<num;k++)
			{
				a=arr[i];b=arr[j];c=arr[k];
				h=(a*b)+c;
				//cout<<h<<endl;
			s1 = lower_bound(rights.begin(),rights.end(),h);
			s2 = upper_bound(rights.begin(),rights.end(),h);
			
			if(s1==rights.end() || *s1!=h)
				continue;

			ct+=(s2-s1);
				
			}
		}
	}
	
	//cout<<ct<<endl;
	printf("%lld\n",ct);
	

return 0;
}
