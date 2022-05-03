#include <iostream>
#include <algorithm>
using namespace std;
int mat[1005][1005];
char grid[1005][1005];

int getMax(int i, int j, int n)
{
    if (i < 0 || i >= n || j < 0 || j >= n)
    {
        return 0;
    }

    if (mat[i][j] != -1)
    {
        return mat[i][j];
    }

    if (grid[i][j] == 'P')
    {
        mat[i][j] = 1 + max({getMax(i + 1, j + 2, n), getMax(i - 1, j + 2, n), getMax(i + 2, j + 1, n), getMax(i - 2, j + 1, n)});
    }
    else
    {
        mat[i][j] = max({getMax(i + 1, j + 2, n), getMax(i - 1, j + 2, n), getMax(i + 2, j + 1, n), getMax(i - 2, j + 1, n)});
    }
    return mat[i][j];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while (t > 0)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> grid[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                mat[i][j] = -1;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 'K')
                {
                    cout << getMax(i, j, n) << '\n';
                    break;
                }
            }
        }
        t--;
    }
}