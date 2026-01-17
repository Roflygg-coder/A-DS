#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

using ll = long long;
using ui = unsigned int;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector <int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    vector <vector <bool>> dp(n + 1, vector <bool>(m + 1, false));
    dp[0][0] = true;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= m; ++j) {
            if (dp[i - 1][j] || (j >= v[i - 1] && dp[i - 1][j - v[i - 1]])) {
                dp[i][j] = true;
            }
        }
    }
    if (dp[n][m]) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}