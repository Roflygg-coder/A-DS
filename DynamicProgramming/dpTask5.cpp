#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <climits>

using namespace std;

using ll = long long;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n;
    vector <int> v1(n);
    for (int i = 0; i < n; ++i) {
        cin >> v1[i];
    }
    cin >> m;
    vector <int> v2(m);
    for (int i = 0; i < m; ++i) {
        cin >> v2[i];
    }
    vector <vector <int>> v(n + 1, vector <int> (m + 1, 0));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (v1[i - 1] == v2[j - 1]) {
                v[i][j] = v[i - 1][j - 1] + 1;
            } else {
                v[i][j] = max(v[i - 1][j], v[i][j - 1]);
            }
        }
    }
    vector <int> ans;
    int i = n, j = m;
    while (v[i][j] != 0) {
        while (v[i][j] == v[i][j - 1]) {
            j--;
        }
        while (v[i][j] == v[i - 1][j]) {
            i--;
        }
        ans.push_back(v2[j - 1]);
        i--;
        j--;
    }
    for (int i = ans.size() - 1; i >= 0; --i) {
        cout << ans[i] << " ";
    }
}