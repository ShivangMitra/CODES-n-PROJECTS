#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int grid[101][101];
int mat[101][101];

// double getMax(int i, int j, int n)
// {
//     if (i < 0 || i >= n || j < 0 || j >= n)
//     {
//         return -2501;
//     }

//     if (i == n - 1 && j == n - 1)
//     {
//         return 0;
//     }

//     if (mat[i][j] != -1)
//     {
//         return mat[i][j];
//     }

//     mat[i][j] = grid[i][j] + max({getMax(i, j + 1, n), getMax(i + 1, j, n)});

//     return mat[i][j];
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 cin >> grid[i][j];
//             }
//         }

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 mat[i][j] = -1;
//             }
//         }

//         double res;
//         res = getMax(0, 0, n);
//         if (res < 0)
//         {
//             cout << "Bad Judges\n";
//         }
//         else
//         {
//             cout << fixed << setprecision(6) << res / (2 * n - 3) << "\n";
//         }
//     }
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                cin >> grid[i][j];
                mat[i][j] = 0;
            }
        int i, j;
        mat[0][0] = grid[0][0];
        for (i = 1; i < n; i++)
            mat[0][i] = mat[0][i - 1] + grid[0][i];
        for (i = 1; i < n; i++)
            mat[i][0] = mat[i - 1][0] + grid[i][0];

        for (i = 1; i < n; i++)
            for (j = 1; j < n; j++)
            {
                mat[i][j] = grid[i][j] + max(mat[i - 1][j], mat[i][j - 1]);
            }
        if (mat[n - 1][n - 1] < 0)
            cout << "Bad Judges"
                 << "\n";
        else
            cout << fixed << setprecision(6) << (mat[n - 1][n - 1] * 1.00 / (2 * n - 3)) << "\n";
    }
    return 0;
}