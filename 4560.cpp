#include<map>
#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main()
{
	//map<long long,long long> lol;
	//map<long long,long long> lol2;
	set<long long> lol;
	
	vector<long long> arr1;
	vector<long long> arr2;
	vector<long long> sum1;
	vector<long long> sum2;
	vector<long long> point2;
	vector<long long> point1;
	while(1>0)
	{
	lol.clear();
	long long n;
	cin>>n;
	if(n==0)
		break;
	arr1.clear();
	arr2.clear();
	sum1.clear();
	sum2.clear();
	point1.clear();
	point2.clear();
	for(long long i=0;i<n;i++)
	{
		long long d;
		cin>>d;
		arr1.push_back(d);
		//lol[d]=1;
		lol.insert(d);
		if(i==0)
			sum1.push_back(d);
		else
			sum1.push_back(sum1[i-1]+d);
	}
	long long n2;
	cin>>n2;
	for(long long i=0;i<n2;i++)
	{
		long long d;
		cin>>d;
		arr2.push_back(d);
		
		if(lol.count(d)>0)
			point2.push_back(i);
		if(i==0)
			sum2.push_back(d);
		else
			sum2.push_back(sum2[i-1]+d);
	}
	
	if(point2.size()==0)
	{
		cout<<max(sum1[n-1],sum2[n2-1])<<endl;
		continue;
	}
	long long to_do=0;
	
	for(long long i=0;i<arr1.size();i++)
	{
		if(arr1[i]==arr2[point2[to_do]])
		{
			point1.push_back(i);
			to_do++;
			if(to_do==point2.size())
				break;
		}
	}
	

//cout<<point1.size()<<" "<<point2.size()<<endl;

	
	long long st=0;
	long long sum=max(sum1[point1[0]],sum2[point2[0]]);


	
	
	for(long long i=1;i<point1.size();i++)
	{
//		sum=sum+max(sum1[point1[i]]-sum1[point1[i-1]],sum2[point2[i]]-sum2[point2[i-1]]);
			//cout<<i<<" "<<i-1<<endl;
			/*cout<<point1[i]<<" "<<point1[i-1]<<endl;
			cout<<point2[i]<<" "<<point2[i-1]<<endl;
			cout<<sum1[point1[i]]<<" "<<sum1[point1[i-1]]<<endl;
			cout<<sum2[point2[i]]<<" "<<sum2[point2[i-1]]<<endl;
*/
			sum=sum+max(sum1[point1[i]]-sum1[point1[i-1]],sum2[point2[i]]-sum2[point2[i-1]]);
		//	
		//cout<<endl;
			
	}
	
	sum=sum+max(sum1[n-1]-sum1[point1[point1.size()-1]],sum2[n2-1]-sum2[point2[point2.size()-1]]);
	cout<<sum<<endl;

	}
	return 0;
}
