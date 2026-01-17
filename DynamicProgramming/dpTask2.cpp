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

    int n;
    cin >> n;
    vector <vector <int>> v(n, vector <int> (3));
    for (int i = 0; i < n; ++i) {
        cin >> v[i][0] >> v[i][1] >> v[i][2];
    }
    vector <int> dp(n + 1);
    if (n == 1) {
        cout << min(min(v[0][1], v[0][2]), v[0][0]);
    } else {
        dp[1] = v[0][0], dp[2] = min(dp[1] + v[1][0], v[0][1]);
        for (int i = 3; i <= n; ++i) {
            dp[i] = min(dp[i - 1] + v[i - 1][0], min(dp[i - 2] + v[i - 2][1], dp[i - 3] + v[i - 3][2]));
        }
        cout << dp[n];
    }
}