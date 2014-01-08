#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long long test;
	cin>>test;
	while(test--)
	{
		long long x1,x2,x3;
		cin>>x1>>x2>>x3;
		long long a = (x1+x2);
		long long b=(-5*x1 -5*x2-2*x3);
		long long c=10*x3;

		long long d2=b*b-4*a*c;
	
		long long g=sqrt(d2);
		long long n1=(-b+g)/(2*a);
		long long n2=(-b-g)/(2*a);
		long long n;
		//cout<<n1<<" "<<n2<<" "<<(-b+g)<<" "<<(4*a*c)<<endl;
		if(n1<0 && n2>=0)
			n=n2;
		if(n1>=0 && n1<0)
			n=n1;
		if(n1>=0 && n2>=0)
		{
			if(n1>5)
				n=n1;
			else
				n=n2;
		}
		cout<<n<<endl;
		long long d= (x2-x1)/(n-5);
		long long ct=1;
		for(long long i=x1-2*d;ct<=n;ct++,i+=d)
			cout<<i<<" ";
		if(test!=-1)
			cout<<endl;
	}
	return 0;
}
