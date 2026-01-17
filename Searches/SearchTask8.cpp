#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

using ll = unsigned long long;

signed main() {
    double c;
    cin >> c;
    double l = 0, r = c;
    for (int iter = 0; iter < 90; ++iter) {
        double m = (l + r) / 2;
        if (m * m + sqrt(m) < c) {
            l = m;
        } else {
            r = m;
        }
    }
    cout << fixed  << l << endl;
    return 0;
}
