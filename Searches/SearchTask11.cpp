#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

using ull = unsigned long long;
using ll = long long;

bool check(int m, int x, int y, int n) {
    m -= min(x, y);
    if (m < 0) {
        return false;
    }
    return ((m / x) + (m / y) >= n - 1);
}

signed main() {
    int n, x, y;
    cin >> n >> x >> y;
    int l = 0, r = n * max(x, y);
    while (r - l > 1) {
        int mid = l + (r - l) / 2;
        if (check(mid, x, y, n)) {
            r = mid;
        } else {
            l = mid;
        }
    }
    cout << r << endl;
    return 0;
}
