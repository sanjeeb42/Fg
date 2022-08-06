#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int n = s.length();

    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n - i; j++)
        {
            dp[j][j + i] = (s[j] == s[j + 1]);
            if (dp[j][j + 1] > 0)
            {
                dp[j][j + i] += dp[j - 1][j + i - 1];
            }
        }
    }

    cout << dp[n - 1][n - 1] << endl;

    return 0;
}
