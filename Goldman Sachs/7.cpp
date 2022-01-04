// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int findPosition(int N, int M, int K)
    {

        if (N == 1)
        {
            return 1;
        }
        // code here
        int temp = M % N + K - 1;
        if (temp == N)
            return temp;
        else
            return temp % N;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, M, K;

        cin >> N >> M >> K;

        Solution ob;
        cout << ob.findPosition(N, M, K) << endl;
    }
    return 0;
} // } Driver Code Ends