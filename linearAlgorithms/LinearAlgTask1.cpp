#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int ibest = 0, jbest = 0, imin = 0;
    for (int j = 1; j < n; ++j) {
        if ((double)v[jbest] / v[ibest] < (double)v[j] / v[imin]) {
            jbest = j, ibest = imin;
        }
        if (v[j] < v[imin]) {
            imin = j;
        }
    }
    if (ibest == 0 && jbest == 0) {
        cout << ibest << " " << jbest;
    } else {
        cout << ibest + 1<< " " << jbest + 1;
    }
}