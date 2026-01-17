#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> pref(n + 1);
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        pref[i + 1] = pref[i] + t;
    }
    int ibest = 0, jbest = 1, imin = 0;
    for (int j = 1; j <= n; ++j) {
        if (pref[j] - pref[imin] > pref[jbest] - pref[ibest]) {
            ibest = imin, jbest = j;
        }
        if (pref[j] <= pref[imin]) {
            imin = j;
        }
    }
    cout << ibest + 1 << " " << jbest;
}