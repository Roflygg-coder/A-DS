#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

using ll = long long;


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m;
    cin >> m;
    vector <pair<int, int>> v;
    int l, r;
    cin >> l >> r;
    while (l != 0 || r != 0) {
        v.emplace_back(l, r);
        cin >> l >> r;
    }
    sort(v.begin(), v.end());
    int left = 0;
    int maxr = -1e9 - 1;
    int addl = -1e9 - 1;
    int addr = -1e9 - 1;
    vector <pair<int, int>> ans;
    for (int i = 0; i < v.size(); i++) {
        if (v[i].first <= left) {
            if (maxr < v[i].second) {
                addl = v[i].first, addr = v[i].second;
            }
            maxr = max(maxr, v[i].second);
        } else {
            if ((addl == -1e9 - 1 and addr == -1e9 - 1) || (ans.size() != 0 and ans[ans.size() - 1] == pair{addl, addr})) {
                continue;
            }
            ans.emplace_back(addl, addr);
            i--;
            left = maxr;
            if (maxr >= m) {
                break;
            }
            addl = -1e9 - 1, addr = -1e9 - 1;
        }
    }
    if ((addl != -1e9 -1 and addr != -1e9 - 1) and ((ans.size() != 0 and v[v.size() - 1] == pair{addl, addr}) || ans.size() == 0)) {
        ans.emplace_back(addl, addr);
    }
    if (maxr >= m) {
        cout << ans.size() << endl;
        for (auto [a, b] : ans) {
            cout <<a << " " << b << endl;
        }
    } else {
        cout << "No solution" << endl;
    }
    return 0;
}