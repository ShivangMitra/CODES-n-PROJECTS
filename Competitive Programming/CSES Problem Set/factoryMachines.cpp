// #include<iostream>
// #include<vector>
// #include<algorithm>

// #define lli long long int

// using namespace std;

// lli solve(vector<lli> arr, lli max_val, lli target)
// {
// 	lli l = 0, r = target * max_val + 1, mid, curr_output, ans;
// 	while (l <= r)
// 	{
// 		mid = l + (r - l) / 2;
// 		curr_output = 0;
// 		for (lli ele : arr)
// 		{
// 			curr_output += mid / ele;
// 		}
// 		if (curr_output >= target)
// 		{
// 			ans = mid;
// 			r = mid - 1;
// 		}
// 		else
// 		{
// 			l = mid + 1;
// 		}
// 	}
// 	return ans;
// }

// int main()
// {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);
// 	lli n, target, max_val = 0;
// 	cin >> n >> target;
// 	vector<lli> arr(n);
// 	for (lli i = 0; i < n; i++)
// 	{
// 		cin >> arr[i];
// 		max_val = max(max_val, arr[i]);
// 	}
// 	cout << solve(arr, max_val, target);
// 	return 0;
// }
//FAILED ON TEST 11

#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  int n, t;
  cin >> n >> t;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  ll k = 1;
  while (true) {
    ll c = 0;
    for (int x : a) c += k / x;
    if (c >= t) break;
    k *= 2;
  }

  ll l = 0;
  for (ll b = k / 2; b >= 1; b /= 2)
    while (l + b <= k) {
      ll c = 0;
      for (int x : a) c += (l + b) / x;
      if (c >= t) break;
      l += b;
    }
  cout << l + 1 << endl;
}