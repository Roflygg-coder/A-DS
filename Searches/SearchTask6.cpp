#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

using ull = unsigned long long;
using ll = long long;

ll check(ll mid, ll n, ll a, ll b, ll c) {
    ll l = 0, r = mid;
    while (r - l > 1) {
        ll m = l + (r - l) / 2;
        if (m * a <= (mid - m - 1) * b + mid * c) {
            l = m;
        } else {
            r = m;
        }
    }
    ll maxr;
    if (r * a < (mid * c) + ((n - mid) * a)) {
        maxr = (mid * c) + ((n - mid) * a);
    } else {
        maxr = r * a;
    }
    if (maxr < ((mid - r - 1) * b) + (mid * c)) {
        maxr = (mid - r - 1) * b + mid * c;
    }
    ll maxl;
    if (l * a < (mid * c) + ((n - mid) * a)) {
        maxl = (mid * c) + ((n - mid) * a);
    }
    if (maxl < ((mid - l - 1) * b) + (mid * c)) {
        maxl = (mid * c) + ((mid - l - 1) * b);
    }
    return min(maxr, maxl);
}

signed main() {
    ll n, a ,b, c;
    cin >> n >> a >> b >> c;
    ll l = 0, r = n;
    while (r - l > 1) {
        ll mid = l + (r - l) / 2;
        if (check(mid, n, a, b, c) < check(mid + 1, n, a, b, c)) {
            r = mid;
        } else {
            l = mid;
        }
    }
    cout << min(check(r, n, a, b, c), check(l, n, a, b, c)) << endl;
    return 0;
}