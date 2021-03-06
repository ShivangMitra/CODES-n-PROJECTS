#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int activity;
        string origin;

        cin >> activity >> origin;

        bool indian;

        int laddus = 0, months = 0;

        while (activity > 0)
        {
            string temp;
            cin >> temp;
            if (temp == "CONTEST_WON")
            {
                int rank;
                cin >> rank;
                if (rank > 20)
                {
                    laddus += 300;
                }
                else
                {
                    laddus += 300 + (20 - rank);
                }
            }
            else if (temp == "TOP_CONTRIBUTOR")
            {
                laddus += 300;
            }
            else if (temp == "BUG_FOUND")
            {
                int severity;
                cin >> severity;
                laddus += severity;
            }
            else if (temp == "CONTEST_HOSTED")
            {
                laddus += 50;
            }
            activity--;
        }
        if (origin == "INDIAN")
        {
            months = laddus / 200;
        }
        else
        {
            months = laddus / 400;
        }
        cout << months << "\n";
    }
}