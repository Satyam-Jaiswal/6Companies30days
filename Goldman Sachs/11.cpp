// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution
{
public:
#define ll long long int
    int *findTwoElement(int *arr, int n)
    {
        // code here
        ll n1 = (ll)n;

        ll x = n1 * (n1 + 1) / 2;

        ll y = 0;

        for (int i = 0; i < n; i++)

        {

            y += (ll)arr[i];
        }

        ll s = x - y;

        ll x_sq = n1 * (n1 + 1) * (2 * n1 + 1) / 6;

        ll y_sq = 0;

        for (int i = 0; i < n; i++)

        {

            ll t = (ll)arr[i];

            t = t * t;

            y_sq += t;
        }

        ll s1 = x_sq - y_sq;

        ll s_xy = s1 / s;

        ll r = (s_xy + s) / 2;

        ll missing = abs(s_xy - r);

        int *ans = new int(2);

        ans[0] = (int)missing;

        ans[1] = (int)r;

        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
} // } Driver Code Ends