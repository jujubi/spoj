/*
Suffix array O(n lg^2 n)
LCP table O(n)
*/
#include <cstdio>
#include<vector>
#include<iostream>
#include <algorithm>
#include<string>
using namespace std;

#define REP(i, n) for (int i = 0; i < (int)(n); ++i)
string S;
int N, gap;
vector<int> sa;
vector<int> pos,tmp,lcp;
void init(string inp)
{
	sa.clear();
	pos.clear();
	tmp.clear();
	lcp.clear();
	S=inp;
	N=inp.size();
	sa.resize(N,0);
	pos.resize(N,0);
	tmp.resize(N,0);
	lcp.resize(N,0);
}
	bool sufCmp(int i, int j)
{
	if (pos[i] != pos[j])
		return pos[i] < pos[j];
	i += gap;
	j += gap;
	return (i < N && j < N) ? pos[i] < pos[j] : i > j;
}
	void buildSA()
{
	N = S.size();
	REP(i, N) sa[i] = i, pos[i] = S[i];
	for (gap = 1;; gap *= 2)
	{
		sort(sa.begin(), sa.end(), sufCmp);
		REP(i, N - 1) tmp[i + 1] = tmp[i] + sufCmp(sa[i], sa[i + 1]);
		REP(i, N) pos[sa[i]] = tmp[i];
		if (tmp[N - 1] == N - 1) break;
	}
}
	void buildLCP()
{
	for (int i = 0, k = 0; i < N; ++i) if (pos[i] != N - 1)
	{
		for (int j = sa[pos[i] + 1]; S[i + k] == S[j + k];)
		++k;
		lcp[pos[i]] = k;
		if (k)--k;
	}
}



int main()
{
	int test;
	cin>>test;
	while(test--)
	{
	string s;
	cin>>s;
	init(s);
	buildSA();
	buildLCP();
	int sum=0;
	for(int i=0;i<lcp.size();i++)
		sum+=lcp[i];
	int h=s.size();
	cout<<((h*(h+1)/2)-sum)<<endl;
	}
return 0;
}


