#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector <int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector <int> b(k);
    int kz = k;
    int i = 0, j = 0;
    int ibest = -1, jbest = -1;
    while (j != n) {

        if (b[v[j] - 1] == 0) {
            kz--;
        }
        b[v[j] - 1]++;
        j++;
        if (kz == 0) {
            if (b[v[i] - 1] != 1) {
                while (b[v[i] - 1] != 1) {
                    b[v[i] - 1]--;
                    i++;
                }
            }
            if (ibest == -1 && jbest == -1) {
                ibest = i, jbest = j;
            } else {
                if (jbest - ibest > j - i) {
                    ibest = i, jbest = j;
                }
            }
        }
    }
    cout << ibest + 1<< " " << jbest;
}