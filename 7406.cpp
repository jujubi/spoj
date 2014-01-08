#include<iostream>
#include<map>
using namespace std;
map<long long,int> arr;
int main()
{
	long long n;
	for(int i=0;i>=0;i++)
	{
		if(3*i*(i+1)+1>1000000000)
			break;
		else
			arr[3*i*(i+1)+1]=1;	
	}
	do
	{
		cin>>n;
		if(n==-1)
			break;
		if(arr[n]==1)
			cout<<"Y"<<endl;
		else
			cout<<"N"<<endl;
	}while(n!=-1);
	return 0;
}
