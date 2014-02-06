#include<iostream>
#include<vector>
using namespace std;
int main()
{

	vector<bool> arr;
	arr.push_back(0);
	arr.push_back(1);
	int k,l,m;
	cin>>k>>l>>m;
//	cout<<"1"<<" "<<arr[1]<<endl;
	for(int i=2;i<=1000001;i++)
	{

		if(arr[i-1]==0)
		{	arr.push_back(1);}	
		else
		{
			arr.push_back(0);
			if(i-k>=0)		
			{	if(arr[i-k]==0)
					arr[i]=1;
			}
			if(i-l >= 0)
			{
				if(arr[i-l] ==0)
					arr[i]=1;
			}
			
			
		}
		
	}
	
	while(m--)
	{
		int num;
		cin>>num;
		if(arr[num]==1)
			cout<<"A";
		else
			cout<<"B";
	}
	
	


}
