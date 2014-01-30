#include<iostream>
#include<math.h>
#include<string>
using namespace std;

// Calculates log2 of number.  
double Log2( double n )  
{  
    // log(n)/log(2) is log2.  
    return log( n ) / log( 2 );  
}

int main()
{
	while(1>0)
	{
	string str;
	cin>>str;
	if(str=="00e0")
		break;
	long long num = (str[0]-48)*10 + (str[1]-48);
	num=num*(pow(10,str[3]-48));

	double st=Log2(num);
	long start=floor(st);
	
	long h = pow(2,start);

	long left = num-h;	
	

	
	cout<<1+(left)*2<<endl;
	
	}
	return 0;
}
