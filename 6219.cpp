#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<vector<int> >arr;

int mini(int a,int b)
{
	if(a<b)
		return a;
	else
		return b;
}
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		arr.clear();
		string a,b;
		cin>>a>>b;
		vector<int> temp;
		int len1=a.size();
		int len2=b.size();
		temp.resize(len2+1,-1);
		arr.resize(len1+1,temp);
		for(int i=0;i<=len2;i++)
			arr[0][i]=i;
	
		for(int i=0;i<=len1;i++)
			arr[i][0]=i;
				


		for(int i=1;i<=len1;i++)
		{
			for(int j=1;j<=len2;j++)
			{	
				int d1=((a[i-1]==b[j-1])?0:1)+arr[i-1][j-1];
				int d2=arr[i][j-1]+1;
				int d3=arr[i-1][j]+1;
				
/*				int d1=((a[i-1]==b[j-1])?0:1)+arr[i-1][j-1];
				int d2=arr[i][j-1]+1; 
				int d3=arr[i-1][j]+1;
*/
				
				arr[i][j]=mini(mini(d1,d2),d3);

	


			}
		}
		
		cout<<arr[len1][len2]<<endl;
		
	}
	return 0;
}
