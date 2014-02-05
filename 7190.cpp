#include<iostream>
#include<string>
#include<vector>

long long gcd(long long a,long long b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);

}

long long lcm(long long a,long long b)
{
	return (a*b)/(gcd(a,b));
}
using namespace std;
int main()
{
	vector<long long> yes;
	vector<long long> no;
	while(1>0)
	{
		yes.clear();
		no.clear();
		string str;
		cin>>str;
		if(str=="*")
			break;

		for(long long i=0;i<str.size();i++)
		{
			if(str[i]=='Y')
				yes.push_back(i+1);
			else
				no.push_back(i+1);
		}	

		if(no.size()>0 && no[0]==1)
		{	cout<<"-1"<<endl;continue;}
		
		if(yes.size()==0)
		{	cout<<"-1"<<endl;continue;}
		
		

		if(yes.size()==1)
		{
			long long d=yes[0];
			long long flag=0;
			long long temp=d;
			while(1>0)
			{
				flag=0;
				
				for(long long i=0;i<no.size();i++)
				{
					if(d%no[i]==0)
					{
						flag=1;
						break;
					}
				}
				if(flag==0)	
					break;
				d+=temp;
			}
			cout<<d<<endl;
			continue;
			
		}
		else
		{
			long long hope = lcm(yes[0],yes[1]);	
			for(long long i=2;i<yes.size();i++)
				hope=lcm(hope,yes[i]);
			long long flag;
			long long temp=hope;
			while(1>0)
			{
				flag=0;
				
				for(long long i=0;i<no.size();i++)
				{
					if(hope%no[i]==0)
					{
						flag=1;
						break;
					}
				}
				break;
					
			}
			if(flag==0)
				cout<<hope<<endl;
			else
				cout<<"-1"<<endl;
			continue;
		}

	}
	return 0;
}
