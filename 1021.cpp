#include<string>
#include<stdio.h>
#include<limits.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<vector<int> > seen;
int func(string s,int st,int end)
{
	//cout<<st<<" "<<end<<endl;
	if(st>end)
		return INT_MAX;
	if(st==end-1)
		return (s[st]==s[end] ? 0:1);
	if(end==-1)
		return 0;
	if(st==end)
		return 0;

	if(seen[st][end]!=-1)
		return seen[st][end];
	
	if(s[st]==s[end])
		return func(s,st+1,end-1);

	int h1 = func(s,st,end-1);
	int h2=	func(s,st+1,end);
	
	int d=min(h1,h2)+1;
	seen[st][end]=d;
	return d;
	

}

int main()
{
	int test;
	//cin>>test;
	scanf("%d",&test);
 vector<vector<int> > arr;
	while(test--)
	{
	string s;
	cin>>s;
	arr.clear();	
	
	int n=s.size();
	//cout<<func(s,0,n-1)<<endl;

                    string topi=s;
		reverse(topi.begin(),topi.end());
                    int maxx=0;
                   
                    vector<int> temp;
                    temp.resize(n+1,0);
                    arr.resize(n+1,temp);
                    for(int i=1;i<=n;i++)
                    {
                            for(int j=1;j<=n;j++)
                            {
                                    if(s[i-1]==topi[j-1])
                                                   arr[i][j]=arr[i-1][j-1]+1;
                                     else
                                   	  arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
		            }
		    }
                   cout<<s.size()-arr[n][n]<<endl;
	
	}
	return 0;
}
