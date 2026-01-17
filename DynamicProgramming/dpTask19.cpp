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
    vector <int> dp(n);
    dp[0] = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (v[j] < v[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        if (dp[i] == 0) {
            dp[i] = 1;
        }
    }
    cout << *max_element(dp.begin(), dp.end());
}