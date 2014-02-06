#include<iostream>
#include<math.h>
using namespace std;

int joker(long long a)
{
	int ct=0;
	while(a>0)
	{
		ct++;
		a/=10;
	}
	return ct;
}
int main()
{
	double g=log(2);
	cout<<2<<" "<<ceil(g)<<endl;
	for(long long i=3;i<=20;i++)
	{
		
		g=ceil(g+log(i));
		cout<<i<<" "<<g<<endl;
			
		
	}
return 0;
}
