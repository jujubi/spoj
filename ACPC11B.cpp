#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main()
{
	int test;
	cin>>test;
		vector<long long> arr1;
		vector<long long> arr2;
	while(test--)
	{
		arr1.clear();
		arr2.clear();
		long long a;
		cin>>a;	
		for(int i=0;i<a;i++)
		{	
			long long d;		
			cin>>d;
			arr1.push_back(d);
		}
	
		long long b;
		cin>>b;	
		for(int i=0;i<b;i++)
		{	
			long long d;		
			cin>>d;
			arr2.push_back(d);
		}
	
		long long ans=abs(arr1[0]-arr2[0]);
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<b;j++)
			{
				if(abs(arr1[i]-arr2[j])<ans)
					ans=abs(arr1[i]-arr2[j]);
			}
		}
	cout<<ans<<endl;
	}

	return 0;
}
