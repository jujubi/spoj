#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;
int main()
{
	string str;
	while(cin>>str)
	{
		int under=0;
		int caps=0;
		for(int i=0;i<str.size();i++)
		{
			if(str[i]=='_')
				under=1;
			if(isupper(str[i]))	
				caps=1;
		}
		if(under+caps>1)
		{	cout<<"Error!"<<endl;continue;}
		if(under==1)
		{
			for(int i=0;i<str.size();i++)
			{
				if(str[i]=='_')
					str[i+1]=toupper(str[i+1]);
				else
					cout<<str[i];
			}
			cout<<endl;
		}
		else if(caps==1)
		{
			for(int i=0;i<str.size();i++)
			{
				if(isupper(str[i]))
					cout<<"_"<<(char)tolower(str[i]);
				else
					cout<<str[i];
			}
			cout<<endl;
		}
		else
			cout<<str<<endl;
	}	
return 0;
}
