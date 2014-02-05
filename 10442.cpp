#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	unsigned long long num;
	vector<unsigned long long> a;
	vector<unsigned long long> b;
	while(1>0)
	{
	a.clear();
	b.clear();
	scanf("%llu",&num);
	if(num==0)
		break;
	
	for(unsigned long long i=0;i<num;i++)
	{
		unsigned long long d;
		scanf("%llu",&d);
		a.push_back(d);
	}

	for(unsigned long long i=0;i<num;i++)
	{
		unsigned long long d;
		scanf("%llu",&d);
		b.push_back(d);
	}

	sort(a.begin(),a.end());
	sort(b.begin(),b.end());

	unsigned long long i=0;
	unsigned long long j=num-1;
	unsigned long long sum=0;
	for(;i<num;i++,j--)
	{
		sum+=a[i]*b[j];
	}


	printf("%llu\n",sum);

	}
		return 0;
	
}
