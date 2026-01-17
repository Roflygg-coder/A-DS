#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <set>
#include <algorithm>
#include <iomanip>
#include <climits>

using namespace std;

using ll = long long;
using ull = unsigned long long;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    vector <int> dp(n);
    dp[0] = v[0], dp[1] = v[1];
    for (int i = 1; i < n; ++i) {
        dp[i] = min(dp[i - 1], dp[i - 2]) + v[i];
    }
    cout << dp[n - 1];
}
