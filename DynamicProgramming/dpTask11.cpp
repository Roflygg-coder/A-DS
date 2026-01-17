#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>

using namespace std;

using ll = long long;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a, b, c;
    cin >> a >> b >> c;
    ll n;
    cin >> n;
    vector <ll> v(n);
    for (ll i = 0; i < n; ++i) {
        cin >> v[i];
    }
    if (a > c) {
        cout << a;
    } else {
        ll l = c - a;
        vector <bool> dp(l + 1, false);
        dp[0] = true;
        ll ans = 2 * 1e9;
        for (ll i = 0; i < n; ++i) {
            for (ll j = l; j >= 0; j--) {
                if (dp[j]) {
                    if (j + v[i] <= l) {
                        dp[j + v[i]] = true;
                    } else {
                        ans = min(ans, j + v[i] + a);
                    }
                }
            }
        }
        cout << min(a + b, ans);
    }
}