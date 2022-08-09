#include <bits/stdc++.h>
using namespace std;


double ternarySearchMin( double left, double right, double eps) /// вызываем функцию тернарного поиска
{
    while (right - left > eps)
    {
        double m1 = (left * 2 + right) / 3; /// берем точки m1 и m2
        double m2 = (left + right * 2) / 3;

        if(f(m1) < f(m2)) 
        {
            right = m2; /// для поиска минимума
            left = m1;  /// максимума
        }
        else
        {
            right = m2; /// максимума
            left = m1;  /// для поиска минимума
        }
    }

    return (left + right) / 2;
}


int main()
{
    return 0;
}
