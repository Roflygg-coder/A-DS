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


int sum = 0;
vector <int> ans, res;
int n, m;
vector <int> v;
void gen(int i) {
    if (sum == n) {
        if (ans.size() == 0 || ans.size() > res.size()) {
            ans = res;
        }
        return;
    }
    if (i < m) {
        if (sum + v[i] <= n) {
            sum += v[i];
            res.push_back(v[i]);
            gen(i+1);
            res.pop_back();
            sum -= v[i];
        }
        if (sum + 2 * v[i] <= n) {
            sum += 2 * v[i];
            res.push_back(v[i]);
            res.push_back(v[i]);
            gen(i + 1);
            res.pop_back();
            res.pop_back();
            sum -= 2 * v[i];
        }
        gen(i + 1);
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    v.resize(m);
    int s = 0;
    for (int i = 0; i < m; i++) {
        cin >> v[i];
        s += 2 * v[i];
    }
    if (s < n) {
        cout << -1 << endl;
    } else {
        gen(0);
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}