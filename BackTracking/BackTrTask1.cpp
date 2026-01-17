#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
#include <climits>

using namespace std;

using ll = long long;

int n, k;
vector <int> ans;
void gen(int i) {
    if (i >= n) {
        for (int j = 0; j < ans.size(); j++) {
            cout << ans[j];
        }
        cout << endl;
        return;
    }
    for (int j = 0; j < k; j++) {
        ans.push_back(j);
        gen(i + 1);
        ans.pop_back();
    }
}

int main() {
    cin >> n >> k;
    gen(0);
}