#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tn;
    cin >> tn;
    while (tn--)
    {
        int n;
        cin >> n;

        map<int, int> index;
        map<int, int> picked;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;

            if (i == 1 && picked[temp] == 0)
            {
                index[temp] = i;
                picked[temp]++;
            }
            else if (index[temp] != i - 1)
            {
                index[temp] = i;
                picked[temp]++;
            }
        }

        int max = -1;
        int type = -1;

        for (auto i : picked)
        {
            if (max == -1)
            {
                max = i.second;
                type = i.first;
            }
            else if (max < i.second)
            {
                max = i.second;
                type = i.first;
            }
            else if (max == i.second)
            {
                if (i.first < type)
                {
                    type = i.first;
                }
            }
        }

        cout << type << "\n";
    }
}