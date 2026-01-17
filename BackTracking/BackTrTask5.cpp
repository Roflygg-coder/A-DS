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

vector <vector <bool>> used(5, vector <bool> (5, false));
vector <vector <ll>> v(5, vector <ll> (5));
vector <ll> path1 = {-1, 0, 0, 1}, path2 = {0, -1, 1, 0};
ll cnt = 1;
ll ans = 0, res = 0;

void gen(ll i, ll j) {
    if (cnt == 9) {
        ans = max(ans, res);
        return;
    }
    for (ll k = 0; k < 4; k++) {
        if (i + path1[k] >= 0 and j + path2[k] >= 0 and !used[i + path1[k]][j + path2[k]]) {
            used[i + path1[k]][j + path2[k]] = true;
            cnt++;
            res *= 10;
            res += v[i + path1[k]][j + path2[k]];
            gen(i + path1[k], j + path2[k]);
            res -= v[i + path1[k]][j + path2[k]];
            res /= 10;
            cnt--;
            used[i + path1[k]][j + path2[k]] = false;
        }
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll i1 = 0, j1 = 0;
    for (ll i = 1; i < 4; i++) {
        for (ll j = 1; j < 4; j++) {
            cin >> v[i][j];
            if (v[i][j] == 9) {
                i1 = i, j1 = j;
            }
        }
    }
    for (ll i = 0; i <= 4; i++) {
        used[0][i] = true;
        used[4][i] = true;
        used[i][0] = true;
        used[i][4] = true;
    }
    for (int i = 1; i < 4; i++) {
        for (int j = 1; j < 4; j++) {
            used.assign(5, vector <bool> (5, false));
            for (ll i = 0; i <= 4; i++) {
                used[0][i] = true;
                used[4][i] = true;
                used[i][0] = true;
                used[i][4] = true;
            }
            used[i][j] = true;
            res = v[i][j];
            gen(i, j);
        }
    }
    cout << ans << endl;
    return 0;
}