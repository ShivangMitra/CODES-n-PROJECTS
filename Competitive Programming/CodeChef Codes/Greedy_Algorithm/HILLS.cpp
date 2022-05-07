#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tn;
    cin >> tn;
    while (tn--)
    {
        int n, u, d;
        cin >> n >> u >> d;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int previous = arr[0];
        int current;
        bool skydive = true;
        bool flag = true;

        for (int i = 1; i < n; i++)
        {
            current = arr[i];
            if (((previous < current) && ((previous + u) >= current)) || ((previous > current) && ((previous - d) <= current)) || (previous == current))
            {
                previous = current;
                continue;
            }
            else if (previous - d > current && skydive)
            {
                previous = current;
                skydive = false;
                continue;
            }
            else
            {
                cout << i << "\n";
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << arr.size() << "\n";
        }
    }
}