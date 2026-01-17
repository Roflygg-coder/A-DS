#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vector <int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int ibest = 0, jbest = 1, imin = 0;
    int best = 0;
    for (int j = 1; j < n; ++j) {
        if (best < ((x / a[imin]) * b[j]) + x % a[imin]) {
            best = ((x / a[imin]) * b[j]) + x % a[imin];
            ibest = imin, jbest = j;
        }
        if (a[imin] > a[j]) {
            imin = j;
        }
    }
    if (best > x) {
        cout << best << endl;
        cout << ibest + 1<< " " << jbest + 1<< endl;
    } else {
        cout << x << endl;
        cout << "-1 -1" << endl;
    }
    return 0;
}