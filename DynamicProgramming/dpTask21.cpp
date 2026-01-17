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
    vector <vector<int>> v(n + 1, vector <int> (10));
    v[1][0] = 0;
    for (int i = 1; i < 10; ++i) {
        v[1][i] = 1;
    }
    for (int i = 2; i <= n; ++i) {
        for (int j = 1; j < 9; ++j) {
            v[i][j] = v[i - 1][j - 1] + v[i - 1][j + 1] + v[i - 1][j];
        }
        v[i][0] = v[i - 1][1] + v[i - 1][0];
        v[i][9] = v[i - 1][8] + v[i - 1][9];
    }
    int ans = 0;
    for (int i = 0; i < 10; ++i) {
        ans += v[n][i];
    }
    cout << ans;
}