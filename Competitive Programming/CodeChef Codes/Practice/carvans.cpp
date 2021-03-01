#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> cars(n);
        cin >> cars[0];
        int fixspeed = cars[0], back = 0, count = 1;
        for (int i = 1; i < n; i++)
        {
            cin >> cars[i];
            back = cars[i];
            if (fixspeed >= back)
            {
                count++;
                fixspeed = back;
            }
        }
        cout << count << "\n";
    }
}