#include<iostream>
#include<set>
#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
	long long n;	
	//cin>>n;
		scanf("%lld",&n);
	vector<long long> a,b,c,d;
	for(long long i=0;i<n;i++)
	{
		long long x1,x2,x3,x4;
		//cin>>x1>>x2>>x3>>x4;
		scanf("%lld %lld %lld %lld",&x1,&x2,&x3,&x4);
		a.push_back(x1);
		b.push_back(x2);
		c.push_back(x3);
		d.push_back(x4);
	}
	multiset<long long> poker;
	for(long long i=0;i<n;i++)
	{
		for(long long j=0;j<n;j++)
		{
			long long sum=c[i]+d[j];
			poker.insert(sum);
		}
	}

	long long count=0;
	for(long long i=0;i<n;i++)
	{
		for(long long j=0;j<n;j++)
		{
			long long sum=a[i]+b[j];
			long long d=poker.count(-sum);
			count+=d;
		}	
	}

	//cout<<count<<endl;
	printf("%lld\n",count);
	return 0;
}
