#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	while(1>0)
	{
		int num;
		cin>>num;
		if(num==1)
			cout<<"0"<<endl;
		else
		{
			if(num==0)
				break;
			cout<<(floor)(log(num)/log(2))<<endl;
		}

	}
	return 0;
}
