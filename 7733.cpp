#include<iostream>
#include<vector>
#include<map>
using namespace std;
map<int,int> seen;

int main()
{
	int arr[]={1, 7, 10, 13, 19, 23, 28, 31, 32,  44,  49,  68,  70,  79,  82,  86,  91,  94,  97,  100,  103,  109,  129,  130,  133,  139,  167,  176,  188,  190,  192,  193,  203,  208,  219,  226,  230,  236,  239,  262,  263,  280,  291,  293,  301,  302,  310,  313,  319,  320,  326,  329,  331,  338,  356,  362,  365,  367,  368,  376,  379,  383,  386,  391,  392,  397,  404,  409,  440,  446,  464,  469,  478,  487,  490,  496,  536,  556,  563,  565,  566,  608,  617,  622,  623,  632,  635,  637,  638,  644,  649,  653,  655,  656,  665,  671,  673,  680,  683, 694, 700, 709, 716};
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
	{
		seen[arr[i]]=1;
	}
	long long n;
	cin>>n;
	long long sum=0;
	while(n>0)
	{
		sum+=(n%10)*(n%10);
		n/=10;
	}
	//cout<<sum<<endl;
	if(seen[sum]==0)
		cout<<-1<<endl;
	else
	{
		long long ans=1;
		while(sum!=1)
		{
		int n=sum;
			sum=0;
		while(n>0)
		{
		sum+=(n%10)*(n%10);
		n/=10;
		}
		ans++;
		}
		cout<<ans<<endl;
	}	
	return 0;
}
