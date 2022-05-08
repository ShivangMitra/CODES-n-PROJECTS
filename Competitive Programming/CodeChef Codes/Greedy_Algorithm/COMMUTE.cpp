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
        int n;
        cin >> n;

        int total_time = 0;

        for (int i = 0; i < n; i++)
        {
            int dep, t, delay;
            cin >> dep >> t >> delay;

            if (total_time <= dep)
            {
                total_time += dep - total_time + t;
            }
            else
            {
                if ((total_time - dep) % delay == 0)
                {
                    total_time += t;
                }
                else
                {
                    total_time += delay - ((total_time - dep) % delay) + t;
                }
            }
        }

        cout << total_time << "\n";
    }
}