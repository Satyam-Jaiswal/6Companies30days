// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    bool canPair(vector<int> nums, int k)
    {
        // Code here.
        map<int, int> h;
        for (auto p : nums)
        { // count the frequencies
            h[p % k] += 1;
        }

        for (auto p : nums)
        {
            int rem = p % k;
            if (rem == 0)
            {
                if (h[rem] & 1) // if odd num of remainder=0
                    return false;
            }
            else if (h[rem] != h[k - rem]) // if k=6,then h[2]!=h[4]
                return false;
        }
        return true;
    }
};

// { Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++)
            cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
} // } Driver Code Ends