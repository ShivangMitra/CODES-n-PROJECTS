#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    stack<pair<int, string>> pile;
    stack<int> min_stack;

    for (int i = 0; i < n; i++)
    {
        int opp;
        cin >> opp;

        if (opp == -1)
        {
            int cnt = 0;
            int mn = min_stack.top();
            while (pile.top().first != mn)
            {
                pile.pop();
                cnt++;
            }
            cout << cnt << " " << pile.top().second << '\n';
            pile.pop();
            min_stack.pop();
        }
        else
        {
            string str;
            cin >> str;
            if (opp != 0)
            {
                pile.push({opp, str});

                if (min_stack.size() == 0 || min_stack.top() >= opp)
                {
                    min_stack.push(opp);
                }
            }
        }
    }
}