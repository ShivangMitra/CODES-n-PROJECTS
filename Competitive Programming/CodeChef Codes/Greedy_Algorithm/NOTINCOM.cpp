#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tn;
    cin >> tn;
    while (tn--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> a1(n);
        vector<int> a2(m);

        for (int i = 0; i < n; i++)
        {
            cin >> a1[i];
        }

        sort(a1.begin(), a1.end());

        for (int i = 0; i < m; i++)
        {
            cin >> a2[i];
        }

        sort(a2.begin(), a2.end());

        int p1 = 0, p2 = 0;
        int count = 0;

        while (p1 < n && p2 < m)
        {
            if (a1[p1] == a2[p2])
            {
                count++;
                p1++;
            }
            else
            {
                if (a1[p1] > a2[p2])
                {
                    p2++;
                }
                else
                {
                    p1++;
                }
            }
        }

        cout << count << "\n";
    }
}

// #include <bits/stdc++.h>
// using namespace std;
// void te() {
// 	int n, m;
// 	scanf("%d%d", &n, &m);
// 	set<int> a, b, c;
// 	for(int i = 0; i < n; ++i) {
// 		int x;
// 		scanf("%d", &x);
// 		a.insert(x);
// 		c.insert(x);
// 	}
// 	for(int i = 0; i < m; ++i) {
// 		int x;
// 		scanf("%d", &x);
// 		b.insert(x);
// 		c.insert(x);
// 	}
// 	printf("%d\n", int(a.size() + b.size() - c.size()));
// }

// int main() {
// 	int T;
// 	scanf("%d", &T);
// 	while(T--) te();
// }