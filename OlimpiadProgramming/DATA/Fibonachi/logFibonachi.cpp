#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define sz(x) (int)s.size()
#define int ll

const int N = 2e5 + 7;
const int MOD = 998244353;

struct matrix // матрица два на два
{
    ll a[2][2];
};

matrix product(matrix a, matrix b)  // произведение двух матриц
{
    matrix c;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            c.a[i][j] = (a.a[i][0] * b.a[0][j]) % MOD + (a.a[i][1] * b.a[1][j]) % MOD;
            c.a[i][j] %= MOD;
        }
    }

    return c;
}

matrix _pow(matrix b, int e) // бинарное возведение для матриц
{
    if (e == 1)
    {
        return b;
    }

    matrix t = _pow(b, e / 2);
    t = product(t, t);

    if (e % 2)
    {
        return product(t, b);
    }
    else
    {
        return t;
    }
}

//#define LOCAL///

ll Fibonachi( ll n)
{
	matrix s;		// Первоначально матрица выглядит так
	s.a[0][0] = 0;	// 0  1
	s.a[0][1] = 1;	// 1  1
	s.a[1][0] = 1;
	s.a[1][1] = 1;

	matrix a = _pow(s, n); /// фибоначи за log(n)!!!!
	return a.a[1][1]; // ответ
}

signed main()
{

#ifdef LOCAL
    freopen("input.txt", "r", stdin);
#endif /// LOCAL


    ll n;
    cin >> n;

	cout << Fibonachi(n);

    return 0;
}
