// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    unordered_map<int, int> dp;

    int rec(int i, int n, string s)
    {
        if (dp.find(i) != dp.end())
            return dp[i];
        int ans = 0;
        if (i >= n)
            return 1;
        if ((s[i] - '0') == 0)
            return 0;
        ans += ((rec(i + 1, n, s)) % (1000000007));
        if (stoi(s.substr(i, 2)) >= 10 && stoi(s.substr(i, 2)) <= 26 && (i + 2) <= n)
        {
            ans += (rec(i + 2, n, s)) % (1000000007);
        }
        return dp[i] = ans % (1000000007);
    }

    int CountWays(string str)
    {
        return (rec(0, str.length(), str) % (1000000007));
    }
};

// { Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string str;
        cin >> str;
        Solution obj;
        int ans = obj.CountWays(str);
        cout << ans << "\n";
    }
    return 0;
} // } Driver Code Ends