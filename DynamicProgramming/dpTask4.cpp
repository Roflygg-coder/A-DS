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

    int n, m;
    cin >> n >> m;
    vector <vector <int>> v(n, vector <int> (m));
    v[0][0] = 1;
    for (int k = 0; k < max(n, m); ++k) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                v[0][0] = 1;
                int s = 0;
                if (i - 1 >= 0 and j - 2 >= 0) {
                    s += v[i - 1][j - 2];
                }
                if (i - 2 >= 0 and j - 1 >= 0) {
                    s += v[i - 2][j - 1];
                }
                if (i - 2 >= 0 and j + 1 < m) {
                    s += v[i - 2][j + 1];
                }
                if (i + 1 < n and j - 2 >= 0) {
                    s += v[i + 1][j - 2];
                }
                v[i][j] = s;
            }
        }
    }
    cout << v[n-1][m-1];
}