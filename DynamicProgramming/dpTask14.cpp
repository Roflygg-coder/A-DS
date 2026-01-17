#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    vector <int> dp(n);
    dp[0] = abs(v[1] - v[0]);
    dp[1] = abs(v[1] - v[0]);
    for (int i = 2; i < n; ++i) {
        dp[i] = min(dp[i - 2] + abs(v[i] - v[i - 1]), dp[i - 1] + abs(v[i] - v[i - 1]));
    }
    cout << dp[n - 1];
}