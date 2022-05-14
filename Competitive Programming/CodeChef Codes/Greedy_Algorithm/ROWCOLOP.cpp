#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<int> row(n, 0);
    vector<int> col(n, 0);

    int max_row = 0;
    int max_col = 0;

    for (int i = 0; i < q; i++)
    {
        string s;
        int index, num;
        cin >> s >> index >> num;
        index = index - 1;

        if (s[0] == 'R')
        {
            row[index] += num;
            max_row = max(max_row, row[index]);
        }
        else
        {
            col[index] += num;
            max_col = max(max_col, col[index]);
        }
    }

    cout << max_row + max_col << "\n";
}