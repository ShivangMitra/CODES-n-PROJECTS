#include <iostream>
#include <bitset>
#include <math.h>

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

        lli c;

        cin >> c;

        int d = 1;

        while (c >= (pow(2, d)))
        {
            d++;
        }

        lli pointer = ((pow(2, d)) / 2) - 1;

        lli other = c ^ pointer;

        cout << pointer * other << "\n";
    }
}

// const int bits = d;

// string binary = bitset<10>(pointer).to_string();

// lli decimal = bitset<10>(pointer).to_ulong();
// cout << decimal << " ";

// cout << (c ^ decimal) << " ";

// cout << ((c ^ decimal) * decimal) << "\n";