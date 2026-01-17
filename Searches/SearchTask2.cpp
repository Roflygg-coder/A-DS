#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

using ull = unsigned long long;
using ll = long long;

bool check(ll m, ll w, ll h, ll n) {
    return ((m / w) * (m / h) >= n);
}

signed main() {
    ll w, h, n;
    cin >> w >> h >> n;
    ll l = 0, r = max(w, h) * n;
    while (r - l > 1) {
        ll m = l + (r - l) / 2;
        if (check(m, w, h, n)) {
            r = m;
        } else {
            l = m;
        }
    }
    cout << r << endl;
    return 0;
}