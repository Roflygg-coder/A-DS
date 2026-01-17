#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <deque>
#include <queue>
#include <climits>
#include <iomanip>
#include <cmath>

using namespace std;

using ull = unsigned long long;
using ll = long long;

signed main() {
    int n;
    cin >> n;
    int l = 0, r = (n + 1) / 2;
    while (r - l > 1) {
        int mid = l + (r - l) / 2;
        cout << "? " << 2 * mid << endl;
        cout.flush();
        int a;
        cin >> a;
        cout << "? " << (2 * mid) - 1 << endl;
        cout.flush();
        int b;
        cin >> b;
        if (a == b) {
            l = mid;
        } else {
            r = mid;
        }
    }
    cout << "? " << (2 * r) - 1 << endl;
    cout.flush();
    int ans;
    cin >> ans;
    cout << "! " << ans << endl;
}
