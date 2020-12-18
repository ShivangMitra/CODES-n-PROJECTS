#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

int main(){
    ios:: sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    int i = 0;
    int j = 0;
    int m = 1;
    set<int> s;
    while(j < n){
        if(s.count(a[j])){
            m = max(m, j-i);
            while(a[i] != a[j]){
                s.erase(a[i++]);
            }
            i++;
        }
        else s.insert(a[j]);
        j++;
    }
    m = max(m, j-i);
    cout << m;
}



// ALTERNATIVE METHOD
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);
// 	int n;
// 	cin >> n;
// 	vector<int> arr(n);
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin >> arr[i];
// 	}
// 	int i = 0, j = 0, max_len = 0, curr_len = 0;
// 	map<int, int> freq;
// 	while (j < n)
// 	{
// 		if (freq.find(arr[j]) == freq.end() || freq[arr[j]] == 0)
// 		{
// 			freq[arr[j]]++;
// 			curr_len++;
// 			max_len = max(max_len, curr_len);
// 			j++;
// 		}
// 		else
// 		{
// 			curr_len--;
// 			freq[arr[i]]--;
// 			i++;
// 		}
// 	}
// 	cout << max_len;
// 	return 0;
// }