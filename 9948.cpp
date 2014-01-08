#include<iostream>
#include<set>
using namespace std;
set<unsigned long long> seen;
int main()
{
	
	unsigned long long n,ct;
	cin>>n;

	ct=n;
	
	int flag=0;
	seen.insert(n);
	while(1>0)
	{
		//cout<<n<<endl;
		if(n==1 || n==0)
			break;
		
		if(n%2==0)
			n/=2;
		else
			n=3*n+3;
		
		if(seen.count(n)>0)
			{flag=1;break;}
		seen.insert(n);
	}
		if(flag==1)
			cout<<"NIE"<<endl;
		else
			cout<<"TAK"<<endl;


	return 0;
}
