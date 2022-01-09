class Solution
{
public:
    int longestMountain(vector<int> &v)
    {
        int ans = 0;
        int size = v.size();
        for (int i = 0; i < size; i++)
        {
            int count = 0;
            int k = i - 1;
            while (k >= 0)
            {
                if (v[k] < v[k + 1])
                {
                    count++;
                }
                else
                {
                    break;
                }
                k--;
            }

            int count2 = 0;
            int j = i + 1;
            while (j < size)
            {
                if (v[j - 1] > v[j])
                {
                    count2++;
                }
                else
                {
                    break;
                }

                j++;
            }
            // cout<<count<<"  "<<count2<<endl;
            if (count == 0 || count2 == 0)
            {
                count = 0;
            }
            else
            {
                count += count2;
            }
            // cout<<"count. "<<count<<endl;
            ans = max(ans, count + 1);
        }
        if (ans >= 3)
        {
            return ans;
        }
        return 0;
    }
};