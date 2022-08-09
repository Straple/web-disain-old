#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct line
{
    long double k , b;

    line(ll _k , ll _b)
    {
        k = _k;
        b = _b;
    }

    ll getVal(ll x)
    {
        return k * x + b; /// возврашает y
    }
};

struct ConvexHullTrick
{
    vector<line> H; /// стек огибающих линий

    bool bad(line &a , line &b , line &c)
    {
        return (b.b - a.b) * (a.k - c.k) >= (c.b - a.b) * (a.k - b.k);
    }

    void newLine(ll k , ll b)
    {
        line cur(k , b);
        while(H.size() >= 2 && bad(H[H.size() - 2] , H.back() , cur))
        {
            H.pop_back();
        }
        H.push_back(cur);
    }

    ll get(ll x)
    {
        int l = -1 , r = H.size() - 1 , m;
        while(l < r - 1)
        {
            m = (l + r) / 2;
            if(H[m].getVal(x) >= H[m + 1].getVal(x))
            {
                l = m;
            }
            else
            {
                r = m;
            }
        }

        return H[r].getVal(x);
    }

};

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n) , b(n) , dp(n);

    for(int i = 0;  i < n ; i++)
    {
        cin >> a[i];
    }
    for(int i = 0;  i < n ; i++)
    {
        cin >> b[i];
    }

    ConvexHullTrick G;
    G.newLine(b[0], 0);/// добавили первую прямую

    for(int i = 1 ; i < n - 1 ; i++)
    {
        dp[i] = G.get(a[i]);
        G.newLine(b[i] , dp[i]);
    }

    cout << G.get(a[n - 1]);


	return 0;
}
