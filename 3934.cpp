#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{
	vector<int> arr;
	arr.resize(500001,-1);
	arr[0]=0;
	map<int,int> lol;
	for(int i=1;i<=500000;i++)
	{
		arr[i]=arr[i-1]-i;
		if(arr[i]<=0 || lol[arr[i]]==1)
			arr[i]=arr[i-1]+i;	
		lol[arr[i]]=1;
		//cout<<arr[i]<<" ";	
	}
	while(1>0)
	{
		int n;
		cin>>n;	
		if(n==-1)
			break;
		cout<<arr[n]<<endl;
		
	}
return 0;
}
