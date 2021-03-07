#include <iostream>
#include <queue>
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

        queue<lli> pile;

        if (syntax[0] == '>')
        {
            cout << 0 << "\n";
        }
        else
        {
            pile.push(0);
            bool complete = true;
            lli index;
            for (lli i = 1; i < syntax.length(); i++)
            {
                if (syntax[i] == '<')
                {
                    pile.push(i);
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
                        index = pile.front();
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
                if (syntax[syntax.length() - 1] == '>')
                {
                    cout << index + 1 << "\n";
                }
                else
                {
                    cout << index + 2 << "\n";
                }
            }
        }
    }
}