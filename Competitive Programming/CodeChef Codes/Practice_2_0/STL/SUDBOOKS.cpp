#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    stack<int> stack;

    for (int i = 0; i < q; i++)
    {
        int action;
        cin >> action;

        if (action == 1)
        {
            int n;
            cin >> n;
            stack.push(n);
        }
        else
        {
            if (!stack.empty())
            {
                cout << stack.top() << "\n";
                stack.pop();
            }
            else
            {
                cout << "kuchbhi?\n";
            }
        }
    }
}