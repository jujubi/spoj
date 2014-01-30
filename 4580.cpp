#include<iostream>
#include<iterator>
#include<algorithm>
#include<set>
using namespace std;
int main()
{
	int num;
	set<int> arr;
	cin>>num;
	while(num--)
	{
		int d;
		cin>>d;
		arr.insert(d);
	}
	
	set<int>::iterator it,it2,it3;
	for(it=arr.begin();it!=arr.end();it++)
	{
		for(it2=arr.begin();it2!=arr.end();it2++)
		{
			for(it3=arr.begin();it3!=arr.end();it3++)
			{
				int a=*it;
				int b=*it2;
				int c=*it3;
				arr.erase(a);
				arr.erase(b);
				arr.erase(c);
				

			}
		}
	}

	return 0;
}
