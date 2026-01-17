#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    if (n == 1) {
        cout << k;
        return 0;
    }
    vector <vector <pair<int, int>>> v(n + 1, vector <pair<int, int>>(k + 1));
    for (int i = 1; i <= k; ++i) {
        v[1][i].first = 1;
        v[1][i].second = 1;
    }
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j <= k; ++j) {
            for (int s = 1; s < j; ++s) {
                v[i + 1][s].second += v[i][j].first;
            }
            for (int s = j + 1; s <= k; ++s) {
                v[i + 1][s].first += v[i][j].second;
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= k; ++i) {
        ans += v[n][i].first + v[n][i].second;
    }
    cout << ans;
    return 0;
}