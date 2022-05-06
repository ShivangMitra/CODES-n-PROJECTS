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
        int n, k;
        cin >> n >> k;

        int trips = 1;
        int sum = 0;
        int temp;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        for (int i = 0; i < n; i++)
        {
            if (v[i] > k)
            {
                trips = -1;
                break;
            }
            sum += v[i];
            if (sum > k)
            {
                trips++;
                sum = v[i];
            }
        }

        cout << trips << "\n";
    }
}