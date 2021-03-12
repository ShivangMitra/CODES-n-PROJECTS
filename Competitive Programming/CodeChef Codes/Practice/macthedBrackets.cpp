#include <iostream>
#include <vector>
#include <stack>
using namespace std;

typedef long long int lli;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    lli n = 0, maxSize = 0, index = 0, maxCount = 0, charCount = 0, index2 = 0;
    cin >> n;
    vector<lli> arr(n);
    stack<lli> p;

    for (lli i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (lli i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            p.push(i + 1);
            charCount += 2;
        }
        else if (arr[i] == 2)
        {
            if (p.size() > maxSize)
            {
                maxSize = p.size();
                index = p.top();
            }
            lli temp = p.top();
            p.pop();
            if (p.size() == 0)
            {
                if (charCount > maxCount)
                {
                    maxCount = charCount;
                    index2 = temp;
                    charCount = 0;
                }
                else
                {
                    charCount = 0;
                }
            }
        }
    }
    cout << maxSize << " " << index << " " << maxCount << " " << index2;
}

// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int maxDepth = 0;

//     vector<int> arr(n);

//     int tempDepth = 0, maxDepthIndex = -1;
//     int maxChars = 0, brackets = 0, tempChars = 0, maxCharIndex = -1, tempCharIndex = 0;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         if (arr[i] == 1)
//         {
//             tempDepth++;
//             if (tempChars == 0)
//             {
//                 tempCharIndex = i + 1;
//             }
//             tempChars++;
//             brackets++;
//         }
//         else if (arr[i] == 2)
//         {
//             tempChars++;
//             brackets--;
//             if (brackets == 0)
//             {
//                 if (tempChars > maxChars)
//                 {
//                     maxChars = tempChars;
//                     maxCharIndex = tempCharIndex;
//                 }
//                 tempChars = 0;
//             }
//             if (tempDepth > maxDepth)
//             {
//                 maxDepth = tempDepth;
//                 maxDepthIndex = i;
//             }
//             tempDepth = 0;
//         }
//     }
//     cout << maxDepth << " " << maxDepthIndex << " " << maxChars << " " << maxCharIndex << "\n";
// }