#include<iostream>
#include<set>
#include<string>
using namespace std;
int main()
{
	int test;
	cin>>test;
	multiset<string> arr;
	while(test--)
	{
		arr.clear();
		int num;	
		cin>>num;	
		string str;
		while(num--)
		{
			cin>>str;
			arr.insert(str);
		}

		multiset<string>::iterator it;
		it=arr.begin();
		if(arr.size()==1)
		{
			cout<<"YES"<<endl;continue;
		}
		
		string pre=*it;
		it++;
		string temp;
		int flag=0;
		for(;it!=arr.end();it++)
		{
			temp=*it;
			if(temp==pre)
			{
				flag=1;
				break;
			}
			else
			{
				if(temp.size()>pre.size())
				{
					if(temp.substr(0,pre.size()) == pre)
					{
						flag=1;break;		
					}
				}
			}
			pre=temp;
		}
		if(flag==1)
			cout<<"NO"<<endl;
		
		else
			cout<<"YES"<<endl;

	}

	return 0;
}
