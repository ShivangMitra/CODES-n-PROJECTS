#include <iostream>
#include <math.h>
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

        int i = 11;
        int sum = 0;
        int min = 0;

        while (sum != n)
        {
            sum = sum + pow(2, i);
            min++;
            if (sum > n)
            {
                sum = sum - pow(2, i);
                i--;
                min--;
            }
        }

        cout << min << "\n";
    }
}