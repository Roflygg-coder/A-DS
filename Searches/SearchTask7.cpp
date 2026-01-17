#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

using ull = unsigned long long;
using ll = long long;

bool check(int mid, vector <int> v, int k) {
    ll cnt = 0;
    for (int i = 0; i < v.size(); ++i) {
        cnt += (v[i] / mid);
    }
    return (cnt >= k);
}



signed main() {
    int n, k;
    cin >> n >> k;
    vector <int> v(n);
    int l = 0, r = -1;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        r = max(r, v[i] + 1);
    }
    while (r - l > 1) {
        int mid = l + (r - l) / 2;
        if (check(mid, v, k)) {
            l = mid;
        } else {
            r = mid;
        }
    }
    cout << l << endl;
    return 0;

}