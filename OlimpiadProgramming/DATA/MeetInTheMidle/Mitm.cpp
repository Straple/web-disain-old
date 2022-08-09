#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long lint;
 
lint A[30];
bool ok;
 
lint Mask[25];
 
struct M
{
    bool have;
};
 
map<lint , M> S;
 
lint ans_1[25] , ans_2[25] , ansL_1 , ansL_2;
 
bool Find;
 
void F(lint n , lint i , lint cnt , lint m , lint f , int (&G)[25] , lint key) /// нашли ответ для всего массива
{
    if(cnt == key && f > 0)
    {
        Find = true;
    }
    else if(i < n)
    {
        G[i] = 1;
        F(n , i + 1 , (cnt + A[i]) % m , m , f + 1 , G , key);
        if(Find)
        {
            return ;
        }
 
        G[i] = 2;
        F(n , i + 1 , (cnt - A[i]) % m , m , f + 1 , G , key);
        if(Find)
        {
            return ;
        }
 
        G[i] = 0;
        F(n , i + 1 , cnt , m , f , G , key);
    }
}
 
 
 
 
void O(lint n , lint i , lint cnt , lint m , lint f)  /// нашли ответ для первой половины
{
    if(i == n)
    {
        S[cnt].have = true;
    }
 
    if(cnt == 0 && f > 0)
    {
        ok = true;
 
        for(int i = 0 ; i < n ; i++)
        {
            if(Mask[i] == 1)
            {
                ans_1[ansL_1] = i + 1;
                ansL_1++;
 
            }
            else if(Mask[i] == 2)
            {
                ans_2[ansL_2] = i + 1;
                ansL_2++;
            }
        }
    }
    else if(i < n)
    {
        Mask[i] = 1;
        O(n , i + 1 , (cnt + A[i]) % m , m , f + 1);
        if(ok)
        {
            return ;
        }
 
        Mask[i] = 2;
        O(n , i + 1 , (cnt - A[i]) % m , m , f + 1);
        if(ok)
        {
            return ;
        }
 
        Mask[i] = 0;
        O(n , i + 1 , cnt , m , f);
    }
}
 
 
void O2(lint n , lint i , lint cnt , lint m ,lint f) /// нашли ответ для второй половины
{
    if(cnt == 0 && f > 0)
    {
        ok = true;
 
        for(int i = n / 2 ; i < n ; i++)
        {
            if(Mask[i] == 1)
            {
                ans_1[ansL_1] = i + 1;
                ansL_1++;
 
            }
            else if(Mask[i] == 2)
            {
                ans_2[ansL_2] = i + 1;
                ansL_2++;
            }
        }
    }
    else if(i == n && f > 0 && (S[-cnt].have || S[m - cnt].have))
    {
        ok = true;
 
        if(S[-cnt].have)
        {
            int G[25];
            Find = false;
 
            F(n / 2 , 0 , 0 , m , 0 , G , -cnt );///
 
 
            for(int i = 0 ; i < n / 2; i++)
            {
                if(G[i] == 1)
                {
                    ans_1[ansL_1] = i + 1;
                    ansL_1++;
 
                }
                else if(G[i] == 2)
                {
                    ans_2[ansL_2] = i + 1;
                    ansL_2++;
                }
            }
        }
        else
        {
            int G[25];
            Find = false;
 
            F(n / 2 , 0 , 0 , m , 0 , G , m - cnt );///
 
 
            for(int i = 0 ; i < n / 2; i++)
            {
                if(G[i] == 1)
                {
                    ans_1[ansL_1] = i + 1;
                    ansL_1++;
 
                }
                else if(G[i] == 2)
                {
                    ans_2[ansL_2] = i + 1;
                    ansL_2++;
                }
            }
 
        }
 
 
        for(int i = n / 2 ; i < n; i++)
        {
            if(Mask[i] == 1)
            {
                ans_1[ansL_1] = i + 1;
                ansL_1++;
 
            }
            else if(Mask[i] == 2)
            {
                ans_2[ansL_2] = i + 1;
                ansL_2++;
            }
        }
 
        return;
    }
    else if(i < n)
    {
        Mask[i] = 1;
        O2(n , i + 1 , (cnt + A[i]) % m , m , f + 1);
        if(ok)
        {
            return ;
        }
 
        Mask[i] = 2;
        O2(n , i + 1 , (cnt - A[i]) % m , m , f + 1);
        if(ok)
        {
            return ;
        }
 
        Mask[i] = 0;
        O2(n , i + 1 , cnt , m , f);
    }
}
 
int main()
{
    int n , m;
    cin >> n >> m;
 
    for(int i = 0; i < n ; i++)
    {
        cin >> A[i];
    }
 
    ok = false;
 
    O(n / 2 , 0 , 0 , m , 0);
 
    if(!ok)
    {
        O2(n , n / 2 , 0 , m , 0);
    }
 
    /// ans
 
    if(!ok)
    {
        cout << -1;
        return 0;
    }
 
    cout << ansL_1 << endl;
 
    for(int i = 0 ; i < ansL_1 ; i++)
    {
        cout << ans_1[i] << " ";
    }
    cout << endl;
 
    cout << ansL_2 << endl;
 
    for(int i = 0 ; i < ansL_2 ; i++)
    {
        cout << ans_2[i] << " ";
    }
 
    return 0;
}