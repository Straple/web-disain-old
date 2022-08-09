#include <iostream>

using namespace std;


long long Pow(long long x, long long y , long long N)
{
    /// x^y % N  Это работает без переполнения !!!!!!!!!

    if (y == 0)
    {
        return 1;
    }

    long long z = Pow(x, y / 2 , N);

    if (y % 2 == 0)
    {
        return (z*z) % N;
    }
    else
    {
        return (((x*z) % N ) *z) % N;
    }
}


int main()
{

    long long x , y , n;
    cin >> x >> y >> n;

    ///x^y % n

    cout << Pow(x , y , n);



    return 0;
}
