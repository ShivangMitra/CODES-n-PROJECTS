#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tn;
    cin >> tn;
    while (tn--)
    {
        string a, b;
        cin >> a >> b;

        int total = 0;
        int counter = 0;

        for (int i = 0; i < a.size(); i += 2)
        {
            if (a[i] != b[i])
                counter++;
            else
            {
                if (counter)
                    total++;
                counter = 0;
            }
        }

        if (counter)
        {
            total++;
        }

        counter = 0;

        for (int i = 1; i < a.size(); i += 2)
        {
            if (a[i] != b[i])
                counter++;
            else
            {
                if (counter)
                    total++;
                counter = 0;
            }
        }

        if (counter)
        {
            total++;
        }

        cout << total << '\n';
    }
}