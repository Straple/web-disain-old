#include <iostream>

using namespace std;

long long gcd(long long a, long long b)
{
    while(a > 0 && b > 0)
    {
        if(a < b) b %= a;
        else a %= b;
    }

    return max(a, b);
}


int main()
{

    return 0;
}
