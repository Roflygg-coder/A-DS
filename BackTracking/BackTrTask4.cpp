#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <climits>

using namespace std;

using ll = long long;

int n;
vector <int> used1, used2, used3;
int ans = 0;
int cnt = 0;

void gen(int j) {
    if (cnt == n) {
        ans++;
        return;
    }
    for (int i = 0; i < n; i++) {
        if (!used1[i - j + n - 1] and !used2[i + j] and !used3[i]) {
            used1[i - j + n - 1] = true, used2[i + j] = true, used3[i] = true;
            cnt++;
            j++;
            gen(j);
            cnt--;
            j--;
            used1[i - j + n - 1] = false, used2[i + j] = false, used3[i] = false;
        }
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    used1.resize(2 * n - 1);
    used2.resize(2 * n - 1);
    used3.resize(n);
    gen(0);
    cout << ans << endl;
    return 0;
}