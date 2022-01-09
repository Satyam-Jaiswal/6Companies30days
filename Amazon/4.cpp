#include <iostream>
#include <cstring>
#include <climits>
#include <string>
using namespace std;

int bk[28][28];

void print(int i, int j)
{
    if (i == j)
    {
        cout << char(i + 'A' - 1);
        return;
    }
    cout << "(";
    print(i, bk[i][j]);
    print(bk[i][j] + 1, j);
    cout << ")";
}

int main()
{
    // code
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int arr[28];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int mcm[28][28];
        memset(mcm, 0, sizeof(mcm[0][0]) * 28 * 28);
        int sum, j;
        string res;
        for (int len = 2; len < n; len++)
        {
            for (int i = 1; i < n - len + 1; i++)
            {
                int mini = INT_MAX - 1;
                j = i + len - 1;
                for (int k = i; k < j; k++)
                {
                    sum = mcm[i][k] + mcm[k + 1][j] + arr[i - 1] * arr[k] * arr[j];
                    if (mini > sum)
                    {
                        mini = sum;
                        bk[i][j] = k;
                    }
                }
                mcm[i][j] = mini;
                // cout<<mini<<" ";
            }
        }
        print(1, n - 1);
        cout << endl;
    }
    return 0;
}
