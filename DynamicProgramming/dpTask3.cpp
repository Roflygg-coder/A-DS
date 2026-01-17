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
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < m; ++j) {
            if (i - 2 < 0 and j - 2 >= 0) {
                v[i][j] = v[i - 1][j - 2];
            } else if (i - 2 >= 0 and j - 2 < 0) {
                v[i][j] = v[i - 2][j - 1];
            } else if (i -2 >= 0 and j - 2 >= 0){
                v[i][j] = v[i - 2][j - 1] + v[i - 1][j - 2];
            }
        }
    }
    cout << v[n-1][m-1];
}