#include <iostream>
#include <iomanip>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

using ll = long long;

struct event {
    ll l, r, cost;
    event(ll l, ll r, ll cost) {
        this->l = l;
        this->r = r;
        this->cost = cost;
    }
    bool operator<(const event other) const {
        return r < other.r;
    }
};

signed main() {
    ll n;
    cin >> n;
    vector <event> v;
    vector <ll> right;
    for (ll i = 0; i < n; i++) {
        ll l, r, c;
        cin >> l >> r >> c;
        v.emplace_back(l, l + r, c);
        right.emplace_back(l + r);
    }
    v.emplace_back(0, 0, 0);
    right.emplace_back(0);
    sort(right.begin(), right.end());
    sort(v.begin(), v.end());
    vector <ll> dp(n + 1);
    for (ll i = 0; i < n; i++) {
        ll r = upper_bound(right.begin(), right.end(), v[i + 1].l) - right.begin() - 1;
        dp[i + 1] = max(dp[i], dp[r] + v[i + 1].cost);
    }
    cout << dp[n] << endl;
    return 0;
}
