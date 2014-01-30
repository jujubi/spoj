#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> arr;
	for(int i=0;i<n;i++)
	{
		int d;
		cin>>d;
		arr.push_back(d);
	}
	if(n==1)
	{	cout<<arr[0]<<endl;
		return 0;}

	int st=0;
	int end=n-1;
	long long ans=0;
	int ct=1;
	while(1>0)	
	{
		if(arr[st]<arr[end])
		{
			ans+=arr[st]*ct;
			ct++;
			st++;
		}
		else
		{
			ans+=arr[end]*ct;
			ct++;
			end--;
		}

		if(st==end)
			break;
	}	

	ans+=arr[st]*ct;
	cout<<ans<<endl;

}
