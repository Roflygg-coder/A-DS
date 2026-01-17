#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

using ll = long long;
using ui = unsigned int;

ui a, b;
ui cur = 0;

ui nextRand() {
    cur = cur * a + b;
    return cur >> 8;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<ui> v((1 << 24) + 1);
    int m, q;
    cin >> m >> q;
    cin >> a >> b;
    while (m--) {
        ui add = nextRand(), l = nextRand(), r = nextRand();
        if (l > r) {
            swap(l, r);
        }
        v[l] += add;
        v[r + 1] -= add;
    }
    vector<ui> pref((1 << 24) + 1 + 1);
    for (int i = 0; i < (int)v.size(); ++i) {
        pref[i + 1] = pref[i] + v[i];
    }
    vector<ui> ps((1 << 24) + 1 + 1 + 1);
    for (int i = 1; i < (int)pref.size(); ++i) {
        ps[i] = ps[i - 1] + pref[i];
    }
    ui ans = 0;
    while (q--) {
        ui l = nextRand(), r = nextRand();
        if (l > r) {
            swap(l, r);
        }
        ans += (ps[r + 1] - ps[l]);
    }
    cout << ans;
}
