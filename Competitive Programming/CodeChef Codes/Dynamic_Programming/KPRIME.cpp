#include <iostream>
#include <string.h>
using namespace std;
#define ll long long int
#define fillchar(a, x) memset(a, x, sizeof(a))
int prime[100005];
void sieve()
{
    fillchar(prime, 0);
    int n = 100000;

    for (int p = 2; p <= n; p++)
    {
        if (prime[p] == 0)
        {
            prime[p]++;
            for (int i = p * 2; i <= n; i = i + p)
            {
                prime[i]++;
            }
        }
    }
}
int main()
{
    sieve();

    int t, a, b, k;

    scanf("%d", &t);

    while (t--)
    {
        scanf("%d %d %d", &a, &b, &k);

        int ctr = 0;

        for (int i = a; i <= b; i++)
        {
            if (prime[i] == k)
                ctr++;
        }

        printf("%d\n", ctr);
    }
    return 0;
}