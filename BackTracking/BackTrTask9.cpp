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

vector <vector <bool>> v;
int cnt = 1;
vector <int> dx = {-1, 0, 0, 1}, dy = {0, -1, 1, 0};
void gen(int i, int j) {
    for (int k = 0; k < 4; k++) {
        if (v[i + dx[k]][j + dy[k]]) {
            v[i + dx[k]][j + dy[k]] = false;
            cnt++;
            gen(i + dx[k], j + dy[k]);
        }
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    v.assign(n, vector <bool>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            char t;
            cin >> t;
            if (t == '*') {
                v[i][j] = false;
            } else {
                v[i][j] = true;
            }
        }
    }
    int i, j;
    cin >> i >> j;
    i--, j--;
    v[i][j] = false;
    gen(i, j);
    cout << cnt << endl;
}