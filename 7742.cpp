#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long long num;
	//cin>>num;
	scanf("%lld",&num);
	long long ans=0;
	while(num--)
	{
		long long d;
		scanf("%lld",&d);
		ans=ans^d;
	}
	//cout<<ans<<endl;
	printf("%lld",ans);
	return 0;
}
