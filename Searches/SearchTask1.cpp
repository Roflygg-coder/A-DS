#include <iostream>
#include <iomanip>
#include <vector>
#include <set>
#include  <map>

using namespace std;

using ll = long long;

signed main() {
    int n, k;
    cin >> n >> k;
    vector <int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int l = 0, r = v[n - 1] + v[0] - 1;
    while (r - l > 1) {
        bool flag = false;
        int m = (l + r) / 2;
        int point = 0;
        int cnt = 1;
        for (int i = 1; i < n; ++i) {
            if (v[i] - v[point] >= m) {
                point = i;
                cnt++;
            }
        }
        if (cnt >= k) {
            flag = true;
        }
        if (flag) {
            l = m;
        } else {
            r = m;
        }
    }
    cout << l << endl;
}
