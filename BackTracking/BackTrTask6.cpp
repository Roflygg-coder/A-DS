#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
#include <climits>
#include <stdlib.h>

using namespace std;

using ll = long long;

ll k, n;
vector <vector <int>> v;
vector <int> res;
vector <int> used;
vector <int> pos;

bool check() {
    bool flag = true;
    for (int i = 0; i < v.size(); i++) {
        int c = 0;
        if (pos[v[i][0]] < pos[v[i][1]]) {
            c++;
        }
        if (pos[v[i][2]] < pos[v[i][3]]) {
            c++;
        }
        if (c != 1) {
            flag = false;
        }
    }
    return flag;
}

void gen() {
    if (res.size() == k) {
        if (check()) {
            for (int i = 0; i < k; i++) {
                cout << res[i] << " ";
            }
            cout << endl;
            exit(0);
        }
        return;
    }
    for (int j = 1; j <= k; j++) {
        if (!used[j]) {
            pos[j] = res.size();
            res.push_back(j);
            used[j] = true;
            gen();
            pos[j] = 0;
            used[j] = false;
            res.pop_back();
        }
    }
}

signed main() {
    cin >> k >> n;
    v.resize(n, vector <int>(4));
    used.resize(k + 1);
    pos.resize(k + 1, 2 * 1e9);
    for (int i = 0; i < n; i++) {
        cin >> v[i][0] >> v[i][1] >> v[i][2] >> v[i][3];
    }
    gen();
    cout << 0 << endl;
    return 0;
}