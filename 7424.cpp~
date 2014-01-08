#include<iostream>
using namespace std;

long long maxi(long long a,long long b)
{
	if(a>b)
		return a;
	else
		return b;
}
long long mini(long long a,long long b)
{
	if(a<b)
		return a;
	else
		return b;
}
int main()
{
	while(1>0)
	{
		long long a,b;	
		cin>>a>>b;
		if(a==-1  && b==-1)
			break;
		long long ma=maxi(a,b);
		long long mi=mini(a,b);
		if(mi==0)
		{
			cout<<ma<<endl;continue;
		}
		long long ct=0;
		while(1>0)	
		{
			if(ma%2==1)
				ma=(ma+1)/2;
			else
				ma/=2;
			mi--;
			if(mi==0)
			{	cout<<ma<<endl;break;}
			
			long long tma=ma;
			long long tmi=mi;
			ma=maxi(tma,tmi);
			mi=mini(tma,tmi);
		}
				


	}
	return 0;
}
