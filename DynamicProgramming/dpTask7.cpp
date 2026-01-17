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
    int n, s;
    cin >> n >> s;
    vector<int> w(n);
    vector<int> c(n);
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> w[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> c[i];
        sum += c[i];
    }
    vector<vector<int> > dp(n + 1, vector<int>(sum + 1, 1e9));
    dp[0][0] = 0;
    int jbest = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= sum; ++j) {
            if (j >= c[i - 1]) {
                dp[i][j] = min(dp[i][j], dp[i - 1][j - c[i - 1]] + w[i - 1]);
            }
            dp[i][j] = min(dp[i][j], dp[i - 1][j]);
            if (dp[i][j] <= s) {
                jbest = j;
            }
        }
    }
    cout << jbest << endl;
}