#include<iostream>
using namespace std;
int main()
{
	char ch='a';
	for(int i=1;i<=6000;i++)
	{
		//cout<<"03 10103538 2222 1233 6160 014"<<i%10<<endl;
		
			cout<<ch;
			ch=ch+1;
			if(ch=='z')
				ch='a';
		
	}
return 0;
}
