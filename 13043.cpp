#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int test;
	cin>>test;
	int temp=test;
	string str;
	while(test--)
	{
		
			if(test==temp-1)
			getline(cin,str);
		getline(cin,str);
		string temp=str;
		reverse(temp.begin(),temp.end());
		if(temp==str)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
