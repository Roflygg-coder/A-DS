#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

using ull = unsigned long long;

signed main() {
    ull n;
    cin >> n;
    ull l = 1, r = n;
    while (r - l > 1) {
        ull m = (l + r) / 2;
        cout << "? " << m << '\n';
        cout.flush();
        int e;
        cin >> e;
        if (e == 0) {
            r = m;
        } else {
            l = m;
        }
    }
    cout << "! " << l << '\n';
    cout.flush();
    return 0;
}
