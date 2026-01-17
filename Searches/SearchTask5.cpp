#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

using ull = unsigned long long;
using ll = long long;

vector <ll> ans;
vector <ll> prom;

bool check(vector <vector <ll>>& v, ll mid, ll m) {
    ll cnt = 0;
    for (ll i = 0; i < v.size(); ++i) {
        ll t = v[i][0], z = v[i][1], y = v[i][2];
        ll e = t * z + y;
        ll c = (mid / e) * z + min(z, (mid % e) / t);
        prom[i] = c;
        cnt += c;
    }
    if (cnt >= m) {
        int p = cnt - m;
        for (ll i = 0; i < prom.size(); ++i) {
            if (prom[i] - p > 0) {
                prom[i] -= p;
                p = 0;
            } else {
                p -= prom[i];
                prom[i] = 0;
            }
            ans[i] = prom[i];
        }
    }
    return (cnt >= m);
}



signed main() {
    ll m, n;
    cin >> m >> n;
    ans.resize(n);
    prom.resize(n);
    vector <vector <ll>> v;
    for (ll i = 0; i < n; ++i) {
        ll t, z, y;
        cin >> t >> z >> y;
        v.push_back({t, z, y});
    }
    ll l = -1, r = 2 * 1e8;
    while (r - l > 1) {
        ll mid = l + (r - l) / 2;
        if (check(v, mid, m)) {
            r = mid;
        } else {
            l = mid;
        }
    }
    cout << r << endl;
    for (ll i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}