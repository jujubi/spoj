#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> arr;
	
	for(int i=1;i<=10;i++)
	{
		int d;
		cin>>d;
		arr.push_back(d);
	}

	int sum=0;
	int i;
	for(i=0;i<arr.size();i++)
	{	
		sum=sum+arr[i];
		if(sum>100)
			break;
	}
	
	int sum2=sum-arr[i];
	
	int left=100-sum2;
	int right=sum-100;
	if(left<right)
		cout<<sum2<<endl;
	else if(left>=right)
		cout<<sum<<endl;

	return 0;
}
