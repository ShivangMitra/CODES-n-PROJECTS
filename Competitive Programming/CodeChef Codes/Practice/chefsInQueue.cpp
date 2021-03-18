#include <iostream>
#include <stack>
using namespace std;

typedef long long int lli;

int main()
{
    lli n, k;
    cin >> n >> k;
    lli arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    lli prod = 1;
    stack<pair<lli, lli>> st;

    for (int i = 0; i < n; i++)
    {
        lli temp;
        temp = arr[i];
        if (st.empty())
        {
            if (temp != 1)
            {
                st.push({temp, i + 1});
            }
        }
        else
        {
            if (st.top().first <= temp)
            {
                st.push({temp, i + 1});
            }
            else
            {
                if (temp == 1)
                {
                    while ((!st.empty()) && (st.top().first > temp))
                    {
                        prod = ((prod % 1000000007) * (((i + 1) - st.top().second + 1) % 1000000007)) % 1000000007;
                        st.pop();
                    }
                }
                else
                {
                    while ((!st.empty()) && (st.top().first > temp))
                    {
                        prod = ((prod % 1000000007) * (((i + 1) - st.top().second + 1) % 1000000007)) % 1000000007;
                        st.pop();
                    }
                    st.push({temp, i + 1});
                }
            }
        }
    }
    cout << prod;
}