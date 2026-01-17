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
    vector <vector <int>> v(n + 1, vector <int> (3));
    v[1][0] = 1, v[1][1] = 1, v[1][2] = 1;
    for (int i = 2; i <= n; ++i) {
        v[i][0] = v[i - 1][1] + v[i - 1][2];
        v[i][1] = v[i - 1][0] + v[i - 1][1] + v[i - 1][2];
        v[i][2] = v[i - 1][0] + v[i - 1][1] + v[i - 1][2];
    }
    cout << v[n][0] + v[n][1] + v[n][2];
}