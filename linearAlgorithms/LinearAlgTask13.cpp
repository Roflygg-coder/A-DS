#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <climits>

using namespace std;

using ll = long long;

struct event {
    int dot, fun, ind;
    event(int dot, int fun, int ind) {
        this->fun = fun;
        this->dot = dot;
        this->ind = ind;
    }
    bool operator<(event const other) const {
        if (dot == other.dot) {
            return fun < other.fun;
        }
        return dot < other.dot;
    }
};

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector <event> v;
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        if (l > r) {
            swap(l, r);
        }
        v.emplace_back(l, 1, 0);
        v.emplace_back(r, 3, 0);
    }
    for (int i = 0; i < m; i++) {
        int d;
        cin >> d;
        v.emplace_back(d, 2, i);
    }
    sort(v.begin(), v.end());
    int bal = 0;
    vector <int> ans(m, -1);
    for (int i = 0; i < v.size(); i++) {
        if (v[i].fun == 1) {
            bal++;
        }
        if (v[i].fun == 2) {
            ans[v[i].ind] = bal;
        }
        if (v[i].fun == 3) {
            bal--;
        }
    }
    for (int i = 0; i < ans.size(); i++) {
        if (ans[i] != -1) {
            cout << ans[i] << " ";
        }
    }
}