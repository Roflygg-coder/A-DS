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

int n, k;
vector <int> ans;
void gen(int i) {
    if (i == k) {
        for (int j = 1; j < ans.size(); j++) {
            cout << ans[j] << " ";
        }
        cout << endl;
        return;
    }
    for (int j = k - i; j < ans.back(); j++) {
        ans.push_back(j);
        gen(i + 1);
        ans.pop_back();
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    ans.push_back(n + 1);
    gen(0);
}