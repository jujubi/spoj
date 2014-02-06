#include<iostream>
using namespace std;
int main()
{
	long long test;
	cin>>test;
	long long h=1;
	while(test--)
	{

		long long num;
		cin>>num;
		long long ans=0;
		long long count=0;
		for(long long i=0;i<num;i++)
		{
			long long d;		
			cin>>d;
			count=count+d;
			if(count<=0)
			{
				count=count*-1;
				ans+=count+1;
				count=1;
			}
		}
		if(ans==0)			
			ans=1;
	
		cout<<"Scenario #"<<h<<": "<<ans<<endl<<endl;
		h++;

	}
	return 0;
}
