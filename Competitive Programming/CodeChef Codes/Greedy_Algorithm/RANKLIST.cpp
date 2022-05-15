#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int tn;
    cin >> tn;
    while (tn--)
    {
        long long int n, s;
        cin >> n >> s;

        long long int sum = (n * (n + 1)) / 2;

        long long int count = 0;

        while (sum > s)
        {
            sum -= n - 1;
            count++;
            n--;
        }

        cout << count << "\n";
    }
}