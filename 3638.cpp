#include<iostream>
#include<vector>
#include<string>
#include <algorithm> 
#include<sstream>
using namespace std;

// trim from start
static inline std::string &ltrim(std::string &s) {
        s.erase(s.begin(), std::find_if(s.begin(), s.end(), std::not1(std::ptr_fun<int, int>(std::isspace))));
        return s;
}

// trim from end
static inline std::string &rtrim(std::string &s) {
        s.erase(std::find_if(s.rbegin(), s.rend(), std::not1(std::ptr_fun<int, int>(std::isspace))).base(), s.end());
        return s;
}

// trim from both ends
static inline std::string &trim(std::string &s) {
        return ltrim(rtrim(s));
}
std::vector<std::string> &split(const std::string &s, char delim, std::vector<std::string> &elems) {
    std::stringstream ss(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        elems.push_back(item);
    }
    return elems;
}


std::vector<std::string> split(const std::string &s, char delim) {
    std::vector<std::string> elems;
    split(s, delim, elems);
    return elems;
}
int main()
{
	
	int test;
	cin>>test;
	string str;
	int loki=test;
	while(test--)
	{
		if(test==loki-1)
			getline(cin,str);
		getline(cin,str);
		if(str.size()==0)
			{cout<<0<<endl;continue;}
		trim(str);
		//cout<<str<<endl;
		vector<std::string> arr = split(str, ' ');
		if(arr.size()==1)
			{cout<<1<<endl;continue;}
		int old=arr[0].size();
		int curr=1;
		int hoho=-1;
		for(int i=1;i<arr.size();i++)
		{
			string temp=arr[i];
			if(temp.size()==old)	
			{
				curr++;	
			}
			else
			{
				if(curr>hoho)
					hoho=curr;
				curr=1;
				old=temp.size();
			}
		}
		if(curr>hoho)
			hoho=curr;
		cout<<hoho<<endl;
	}	
	return 0;
}
