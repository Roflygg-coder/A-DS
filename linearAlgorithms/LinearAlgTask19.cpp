#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector <vector <int>> v(n, vector <int> (m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> v[i][j];
        }
    }
    vector <vector <int>> dp(n, vector <int> (m + 1));
    dp[0][0] = -1e9;
    for (int i = 0; i < m; ++i) {
        if (v[0][i] == 1) {
            dp[0][i + 1] = 0;
        } else {
            dp[0][i + 1] = 1;
        }
    }
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (j == 0) {
                dp[i][j] = -1e9;
            }
            if (v[i][j] == 1) {
                dp[i][j + 1] = 0;
            } else {
                dp[i][j + 1] = dp[i - 1][j + 1] + 1;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        vector <int> str(1), stl(1);
        vector <int> ansr(m + 2), ansl(m + 2);
        dp[i].push_back(-1e9 + 1);
        for (int j = 1; j <= m + 1; ++j) {
            while (dp[i][str.back()] > dp[i][j]) {
                ansr[str.back()] = j;
                str.pop_back();
            }
            str.push_back(j);
            while (dp[i][stl.back()] >= dp[i][j]) {
                stl.pop_back();
            }
            ansl[j] = stl.back();
            stl.push_back(j);
        }
        int best = 0;
        for (int j = 1; j <= m; ++j) {
            best = max(best, (ansr[j] - ansl[j] - 1) * dp[i][j]);
        }
        ans = max(ans, best);
    }
    cout << ans;
}
