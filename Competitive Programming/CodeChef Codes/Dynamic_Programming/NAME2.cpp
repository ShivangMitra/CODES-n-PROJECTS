#include <iostream>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        if (a.size() == b.size() && a == b)
            printf("YES\n");
        else
        {
            int count = 0;
            string small, large;
            if (a.size() < b.size())
            {
                small = a;
                large = b;
            }
            else
            {
                small = b;
                large = a;
            }
            for (int j = 0; j < large.size(); j++)
            {
                if (small[count] == large[j])
                {
                    count++;
                }
            }
            if (count == small.size())
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}