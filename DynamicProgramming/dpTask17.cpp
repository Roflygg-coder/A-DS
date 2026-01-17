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
    int n;
    cin >> n;
    if (n == 0) {
        cout << "0 0 0";
        return 0;
    }
    vector <int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    vector <vector <pair<int, int>>> dp(n, vector <pair<int, int>>(n + 1, {-1, -1}));
    if (v[0] > 100) {
        dp[0][1] = {v[0], 0};
    } else {
        dp[0][0] = {v[0], 0};
    }
    for (int i = 1; i < n; ++i) {
        if (dp[i - 1][0].first != -1) {
            if (v[i] <= 100) {
                dp[i][0] = {dp[i - 1][0].first + v[i], dp[i - 1][0].second};
            }
        }
        if (dp[i][0].first == -1 || (dp[i - 1][1].first != -1 and dp[i][0].first > dp[i - 1][1].first)) {
            dp[i][0] = {dp[i - 1][1].first, dp[i - 1][1].second + 1};
        }
        for (int j = 1; j < n; ++j) {
            if (v[i] > 100 and dp[i - 1][j - 1].first != -1) {
                dp[i][j] = {dp[i - 1][j - 1].first + v[i], dp[i - 1][j - 1].second};
            }
            if (v[i] <= 100 and dp[i - 1][j].first != -1) {
                if (dp[i][j].first == -1 or dp[i][j].first > dp[i - 1][j].first + v[i]) {
                    dp[i][j] = {dp[i - 1][j].first + v[i], dp[i - 1][j].second};
                }
            }
            if (dp[i][j].first == -1 or (dp[i][j].first > dp[i - 1][j + 1].first)) {
                if (dp[i - 1][j + 1].first != -1) {
                    dp[i][j] = {dp[i - 1][j + 1].first, dp[i - 1][j + 1].second + 1};
                }
            }
        }
        if (dp[i - 1][n - 1].first != -1 and v[i] > 100) {
            dp[i][n] = {dp[i - 1][n - 1].first + v[i], dp[i - 1][n - 1].second};
        }
        if (dp[i][n].first == -1 or dp[i - 1][n].first + v[i] < dp[i][n].first) {
            if (v[i] <= 100 and dp[i - 1][n - 1].first != -1) {
                dp[i][n] = {dp[i - 1][n].first + v[i], dp[i - 1][n].second};
            }
        }
    }
    int ansj = 0;
    for (int i = 1; i <= n; ++i) {
        if (dp[n - 1][i].first != -1) {
            if (dp[n - 1][i].first <= dp[n - 1][ansj].first or dp[n - 1][ansj].first == -1) {
                ansj = i;
            }
        }
    }
    cout << dp[n - 1][ansj].first << " " << ansj << " " << dp[n - 1][ansj].second;
}