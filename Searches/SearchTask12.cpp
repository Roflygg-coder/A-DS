#include <iostream>
#include <limits>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

using ull = unsigned long long;
using ll = long long;

bool check(ull mid, ull n, ull a, ull b, ull w, ull h) {
    ull width = a + 2 * mid;
    ull height = b + 2 * mid;
    if ((w / width) * (h / height) >= n || (h / width) * (w / height) >= n) {
        return true;
    }
    return false;
}

signed main() {
    ull n, a, b, w, h;
    cin >> n >> a >> b >> w >> h;
    ll l = -1, r = 9'000'000'000'000'000'000;
    while (r - l > 1) {
        ull mid = l + (r - l) / 2;
        if (check(mid, n, a, b, w, h)) {
            l = mid;
        } else {
            r = mid;
        }
    }
    cout << l << endl;
    return 0;
}
