#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;

    int A[n];

    for(int i = 0 ; i < n ; i++)
    {
        cin >> A[i];
    }

    int dp[n] = {1};

    for(int i = 1 ; i < n ; i++)
    {
        dp[i] = 0;
        for(int j = 0; j < i ; j++)
        {
            if(A[i] > A[j] && dp[i] < dp[j] + 1)
            {
                dp[i] = dp[j] + 1;
            }
        }
    }

    int ans = 0;

    for(int i = 0 ; i < n ; i++)
    {
        ans = max(ans, dp[i]);
    }

    cout << ans;


    return 0;
}
