#include <iostream>
#include <stack>
using namespace std;

typedef long long int lli;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    lli t;
    cin >> t;

    while (t--)
    {
        string syntax;
        cin >> syntax;

        stack<lli> pile;
        bool complete = true;
        lli index;
        for (lli i = 0; i < syntax.length(); i++)
        {
            if (syntax[i] == '<')
            {
                if (pile.empty())
                {
                    index = i;
                    pile.push(i);
                }
                else
                {
                    pile.push(i);
                }
            }
            else
            {
                if (pile.empty())
                {
                    cout << i << "\n";
                    complete = false;
                    break;
                }
                else
                {
                    pile.pop();
                }
            }
        }
        if (complete && pile.empty())
        {
            cout << syntax.length() << "\n";
        }
        else if (complete)
        {
            cout << index << "\n";
        }
    }
}