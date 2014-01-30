#include <stdio.h>
using namespace std;
 
void multiply(long long F[2][2], long long M[2][2]);
 
void power(long long F[2][2], long long n);
 
/* function that returns nth Fibonacci number */
long long fib(long long n)
{
  long long F[2][2] = {{1,1},{1,0}};
  if (n == 0)
    return 0;
  power(F, n-1);
  return F[0][0];
}
 
/* Optimized version of power() in method 4 */
void power(long long F[2][2], long long n)
{
  if( n == 0 || n == 1)
      return;
  long long M[2][2] = {{1,1},{1,0}};
 
  power(F, n/2);
  multiply(F, F);
 
  if (n%2 != 0)
     multiply(F, M);
}
 
void multiply(long long F[2][2], long long M[2][2])
{
  long long x =  ((F[0][0]%1000000007)*(M[0][0]%1000000007)%1000000007) + ((F[0][1]%1000000007)*(M[1][0]%1000000007)%1000000007);
  long long y =  ((F[0][0]%1000000007)*(M[0][1]%1000000007)%1000000007) + ((F[0][1]%1000000007)*(M[1][1]%1000000007)%1000000007);
  long long z =  ((F[1][0]%1000000007)*(M[0][0]%1000000007)%1000000007) + ((F[1][1]%1000000007)*(M[1][0]%1000000007)%1000000007);
  long long w =  ((F[1][0]%1000000007)*(M[0][1]%1000000007)%1000000007) + ((F[1][1]%1000000007)*(M[1][1]%1000000007)%1000000007);
 
  F[0][0] = x%1000000007;
  F[0][1] = y%1000000007;
  F[1][0] = z%1000000007;
  F[1][1] = w%1000000007;
}
 
/* Driver program to test above function */
int main()
{
  
	long long test;
	scanf("%lld",&test);
	while(test--)
	{
		long long n,m;
		scanf("%lld %lld",&n,&m);
		long long h = fib(m+2)-fib(n+1);
		if(h<0)
			h=h+1000000007;
		printf("%lld\n",h);
	}


  //Do M-N
  //P=fib(M-N)
 // Q = fib(M-N+1)

	


  return 0;
}
