#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(26, 100);
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        vector<int> b(26);
        for (int j = 0; j < s.length(); j++)
        {
            (b[s[j] - 'a']++);
        }
        for (int j = 0; j < 26; j++)
        {
            if (a[j] > b[j])
                a[j] = b[j];
        }
    }
    int m = 0;

    for (int i = 0; i < 26; i++)
    {
        for (int j = a[i]; j > 0; j--)
        {
            cout << (char)(i + 'a');
            m = 1;
        }
    }
    if (m == 0)
        cout << "no such string";
    return 0;
}