#include<iostream>
#include<string>
#include<map>
using namespace std;
map<string,int> ans;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int num;
		cin>>num;
		ans.clear();
		string str;	
		cin>>str;
		//cout<<str<<endl;
		for(int i=0;i<str.size()-2;i++)
		{
			string tem="";
			tem=tem+str[i]+str[i+1]+str[i+2];
			ans[tem]++;
		}
		cout<<num<<" "<<ans["TTT"]<<" "<<ans["TTH"]<<" "<<ans["THT"]<<" "<<ans["THH"]<<" "<<ans["HTT"]<<" "<<ans["HTH"]<<" "<<ans["HHT"]<<" "<<ans["HHH"];
		cout<<endl;
	}

	return 0;
}
