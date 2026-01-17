#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

using ull = unsigned long long;
using ll = long long;


signed main() {
    int n, m, l;
    cin >> n >> m >> l;
    vector <vector <int>> up;
    vector <vector <int>> down;
    for (int i = 0 ; i < n; ++i) {
        vector <int> p;
        for (int j = 0; j < l; ++j) {
            int t;
            cin >> t;
            p.push_back(t);
        }
        up.push_back(p);
    }
    for (int i = 0; i < m; ++i) {
        vector <int> p;
        for (int j = 0; j < l; ++j) {
            int t;
            cin >> t;
            p.push_back(t);
        }
        down.push_back(p);
    }
    int q;
    cin >> q;
    while (q--) {
        int i, j;
        cin >> i >> j;
        vector <int> a = up[i - 1];
        vector <int> b = down[j - 1];
        int left = 0, right = l - 1;
        while (right - left > 1) {
            int mid = left + (right - left) / 2;
            if (a[mid] >= b[mid]) {
                right = mid;
            } else {
                left = mid;
            }
        }
        if (max(a[left], b[left]) < max(a[right], b[right])) {
            cout << left + 1 << endl;
        } else {
            cout << right + 1 << endl;
        }
    }
}
