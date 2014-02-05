#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<vector<char> > arr;
	vector<char> temp;
	int chk=0;	
	for(int i=0;i<n;i++)
	{
		temp.clear();
		for(int j=0;j<n;j++)
		{
			char d;
			cin>>d;
			if(d=='#')
				chk++;
			temp.push_back(d);
		}
		arr.push_back(temp);
	}

	if(chk%5!=0)
	{	cout<<"NO";return 0;}

	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i][j]=='#' && arr[i+1][j]=='#' && arr[i-1][j]=='#' && arr[i][j-1]=='#' && arr[i][j+1]=='#')
			{
				arr[i][j]='.';
				arr[i-1][j]='.';
				arr[i+1][j]='.';
				arr[i][j-1]='.';
				arr[i][j+1]='.';
				chk-=5;
			}
				
		}
	}
	if(chk==0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
