#include<iostream>
#include<vector>
#include<stdio.h>
#include<string>
#include<string.h>
#include <algorithm> 
#include<sstream>
using namespace std;


int main()
{
	
	int test;
	cin>>test;
	string str;
	int loki=test;
	vector<string> arr;
	while(test--)
	{
		arr.clear();
		//if(test==loki-1)
		//	getline(cin,str);
		getline(cin,str);
		//scanf(" %[^\r\n]",str);
		if(str.size()==0)
		{
			test++;	continue;
		}
		int i=0;
		while(str[i]==' ')
			i++;
		if(i==str.size())
		{
			cout<<"0"<<endl;
			continue;
		}
		string temp="";
		for(;i<str.size();i++)
		{
			if(str[i]==' ')
			{
					
				if(temp!="")
				{			//cout<<temp<<" "<<temp.size()<<endl;
		arr.push_back(temp);}

				temp="";
				
			}
			else
				temp=temp+str[i];

		
		}
		if(temp!="")	
			arr.push_back(temp);
		//sort(arr.begin(),arr.end(),myfn);
		//cout<<arr.size()<<endl;
		int curr=arr[0].size();
		int count=1;
		int maxi=0;
		
		for(int i=1;i<arr.size();i++)
		{
			if(arr[i].size()==curr)
				count++;
			else
			{
				if(count>maxi)
					maxi=count;
				//cout<<arr[i]<<" "<<count<<endl;
				count=1;
				curr=arr[i].size();
			}
			//cout<<i<<endl;
		}
		if(count>maxi)
			maxi=count;
		cout<<maxi<<endl;
		
	}	
	return 0;
}
