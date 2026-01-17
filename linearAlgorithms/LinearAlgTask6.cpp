#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, r;
    cin >> n >> r;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    long long ans = 0;
    int j = 0, i = 1;
    while (i < n && j != n - 1) {
        if (v[i] - v[j] <= r) {
            i++;
        } else {
            ans += n - i;
            j++;
        }
    }
    cout << ans << endl;
}