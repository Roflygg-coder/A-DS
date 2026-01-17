#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

using ull = unsigned long long;
using ll = long long;
int ans = -1;

bool check(vector <ll> v, ll mid, ll c, ll r) {
    ll maxi = -1'000'000'001;
    ll cnt = 0;
    if (v.size() >= c) {
        for (ll i = 0; i <= v.size() - c; ++i) {
            if (v[i + c - 1] - v[i] <= mid) {
                if (maxi < v[i + c - 1] - v[i]) {
                    maxi = v[i + c - 1] - v[i];
                }
                i += (c - 1);
                cnt++;
            }
        }
    }
    if (cnt >= r) {
        if (ans == -1 or maxi < ans) {
            ans = maxi;
        }
        return true;
    }
    return false;
}



signed main() {
    ll n, r, c;
    cin >> n >> r >> c;
    vector <ll> v(n);
    for (ll i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll left = 0, right = v[n - 1];
    while (right - left > 1) {
        ll mid = left + (right - left) / 2;
        if (check(v, mid, c, r)) {
            right = mid;
        } else {
            left = mid;
        }
    }
    cout << ans << endl;
    return 0;
}