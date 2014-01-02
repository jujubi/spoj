#include<iostream>
#include<algorithm>
#include<string>
#include<ctype.h>
#include<vector>
using namespace std;
int main()
{
long long test;
cin>>test;
test*=2;
long long l=test;

while(test--)
{
	
	string str;
	if(l==test+1)
		getline(cin,str);
	getline(cin,str);
	if(str!="")	
		cout<<"";
	else
		continue;

	string first="";
	string second="";
	char maddis='p';
	long long flag=0;
	
	for(long long i=0;i<str.size();i++)
	{
		if(isdigit(str[i]))
		{
			if(maddis=='p')
				first+=str[i];
			else
				second+=str[i];
		}
		if(str[i]=='-' || str[i]=='+' || str[i]=='*' || str[i]=='/' || str[i]=='=' )
		{
			if(maddis=='p')
				maddis=str[i];
			else
			{
				
				//cout<<first<<" "<<second<<" "<<maddis<<endl;
				long long ct=first[0]-48;
				for(long long j=1;j<first.size();j++)
					ct=ct*10+(first[j]-48);
				long long ct2=second[0]-48;
				for(long long j=1;j<second.size();j++)
					ct2=ct2*10+(second[j]-48);
				//cout<<ct<<" "<<ct2<<endl;
				long long an;
				switch(maddis)
				{
					case '+':an=ct+ct2;		
						break;
					case '-':an=ct-ct2;		
						break;
					case '*':an=ct*ct2;		
						break;
					case '/':an=ct/ct2;		
						break;
				}
				//cout<<ct<<maddis<<ct2<<"="<<an<<endl;
			string go;
			if(an==0)
				go="0";
			else
			 go="";
	
				while(an>0)
				{
					go=go+(char)(an%10+48);
					an/=10;
				}
				reverse(go.begin(),go.end());
				first=go;
				maddis=str[i];
			}
			second="";
			
		}
	}
cout<<first<<endl;
	
}
return 0;
}
