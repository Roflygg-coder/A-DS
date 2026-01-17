#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

using ull = unsigned long long;
using ll = long long;

bool check(ull mid, ull a, ull k, ull b ,ull m, ull x) {
    return (((__int128)(mid - (mid / k)) * a + (__int128)(mid - (mid / m)) * b) >= (__int128)x);
}

signed main() {
    ull a, k, b, m, x;
    cin >> a >> k >> b >> m;
    cin >> x;
    ull l = 0, r = 2 * 1e18;
    while (r - l > 1) {
        ull mid = l + (r - l) / 2;
        if (check(mid, a, k, b, m, x)) {
            r = mid;
        } else {
            l = mid;
        }
    }
    cout << r << endl;
    return 0;
}