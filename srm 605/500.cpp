#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

//Func here
int getNumber(vector <string> board)
{
	int size=board.size();	
	vector<string> god;
	int lol;
	for(int i=0;i<size;i++)
	{
		string temp=board[i];
		lol=temp.size();
		int b_c=0;int w_c=0;	
		for(int j=0;j<temp.size();j++)
		{
			if(temp[j]=='B')
				b_c++;
			else
				w_c++;
		}

		if(b_c>=w_c)	
		{
		for(int j=0;j<temp.size();j++)
		{
			if(temp[j]=='B')
				temp[j]='W';
			else
				temp[j]='B';
		}
		}
	
		for(int j=0;j<temp.size();j++)
		{
			if(temp[j]=='B')
				temp[j]='0';
			else
				temp[j]='1';
		}
		god.push_back(temp);
	}

	vector<vector<int> > ans;
	vector<int> temp;
	temp.resize(lol+1,0);
	ans.resize(size,temp);

	for(int i=0;i<lol;i++)
		ans[0][i]=god[0][i]-48;
	for(int i=0;i<size;i++)
		ans[i][0]=god[i][0]-48;

	for(int i=1;i<size;i++)
	{
		for(int j=1;j<lol;j++)
		{
			ans[i][j]=min(min(ans[i-1][j],ans[i][j-1]),ans[i-1][j-1]);
			if(god[i][j]=='1')
				ans[i][j]+=1;
		}
	}
	
	int mohawk=ans[0][0];
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<lol;j++)
		{
			if(ans[i][j]>mohawk)
				mohawk=ans[i][j];
		}
//		cout<<endl;
	}

	return mohawk*mohawk;
}

//Main
int main()
{
	/*{"WBBB",
 "WBBB",
 "WWWW"}*/
	vector<string> arr;
	arr.push_back("BWWB");
	arr.push_back("WBBW");
	//arr.push_back("WWWW");
	cout<<getNumber(arr);
	return 0;
}
