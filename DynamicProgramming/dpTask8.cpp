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
    vector <int> v(n);
    int sum = 0;
    for (int i = 0 ; i < n; ++i) {
        cin >> v[i];
        sum += v[i];
    }
    if (sum % 2 != 0) {
        cout << "NO";
        return 0;
    }
    vector <vector <bool>> dp(n + 1, vector <bool> ((sum / 2) + 1, false));
    dp[0][0] = true;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= (sum / 2); ++j) {
            if (dp[i - 1][j] || (j >= v[i - 1] && dp[i - 1][j - v[i - 1]])) {
                dp[i][j] = true;
            }
        }
    }
    if (dp[n][sum / 2]) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}