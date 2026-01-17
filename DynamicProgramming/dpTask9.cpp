#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <bitset>

using namespace std;

using ll = long long;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s;
    cin >> s;
    int n;
    cin >> n;
    vector <int> v1(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
        sum += v1[i];
    }
    int m;
    cin >> m;
    vector <int> v2(m);
    for (int i = 0; i < m; i++) {
        cin >> v2[i];
    }
    vector <vector <bool>> dp(n + m + 1, vector <bool> (sum + 1, false));
    dp[0][0] = true;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= sum; j++) {
            if (dp[i - 1][j] || (j >= v1[i - 1] and dp[i - 1][j - v1[i - 1]])) {
                dp[i][j] = true;
            }
        }
    }
    for (int i = n + 1; i <= n + m; i++) {
        for (int j = 0; j <= sum; j++) {
            if (dp[i - 1][j] || (j + v2[i - n - 1] <= sum and dp[i - 1][j + v2[i - n - 1]])) {
                dp[i][j] = true;
            }
        }
    }
    if (dp[n + m][s]) {
        int ind = s;
        for (int i = n + m; i > n; i--) {
            if (ind + v2[i - n - 1] <= sum and dp[i - 1][ind + v2[i - n - 1]]) {
                cout << -v2[i - n - 1] << " ";
                ind += v2[i - n - 1];
            }
        }
        for (int i = n; i > 0; i--) {
            if (ind >= v1[i - 1] and dp[i - 1][ind - v1[i - 1]]) {
                cout << "+" << v1[i - 1] << " ";
                ind -= v1[i - 1];
            }
        }
    } else {
        cout << "Impossible" << endl;
    }
    return 0;
}