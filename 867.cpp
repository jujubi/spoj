#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	for(int a=1;a<=100;a++)
	{
	for(int b=2;b<=100;b++)
	{
	for(int c=b;c<=100;c++)
	{
	for(int d=c;d<=100;d++)
	{
		if(a*a*a == b*b*b + c*c*c + d*d*d)
		{	
			printf("Cube = %d, Triple = (%d,%d,%d)\n",a,b,c,d);
		}
	
	}
	}
	}
	}
	return 0;
}
