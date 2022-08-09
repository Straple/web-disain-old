#include <bits/stdc++.h>

using namespace std;

void nd(long long n)
{
	for(long long i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			/// делители i , n / i
		}
	}

}

void pnd(long long n)
{
	for(long long i = 2; i <= n; i++)
	{
		if(n % i == 0)
		{
			while(n % i == 0)
			{
				n /= i;
			}

			/// i - простой делитель n.
		}
	}
}


int main()
{

    return 0;
}
