#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<long long> arr1;
	vector<long long> arr2;
	while(1>0)
	{
		long long a,b;
		cin>>a>>b;
		if(a==0 && b==0)
			break;
		arr1.clear();arr2.clear();		
		for(int i=0;i<a;i++)
		{
			long long h;
			cin>>h;
			arr1.push_back(h);
		}
		for(int i=0;i<b;i++)
		{
			long long h;
			cin>>h;
			arr2.push_back(h);
		}

		sort(arr1.begin(),arr1.end());
		sort(arr2.begin(),arr2.end());
		
		int flag=0;
		if(arr1[0]<=arr2[0])
			flag=1;
		if(arr1[0]>=arr2[0] && arr1[0]<arr2[1])
			flag=1;
		if(arr1[0]>=arr2[0] && arr1[0]==arr2[1])
			flag=0;
		if(flag==1)
			cout<<"Y"<<endl;
		else
			cout<<"N"<<endl;

	}

	return 0;
}
