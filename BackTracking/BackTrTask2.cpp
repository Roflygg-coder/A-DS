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
string s;
int cnt = 0;
void gen(int i) {
    if (cnt == k && n == s.length()) {
        cout << s << endl;
        return;
    }
    if (n - i > k - cnt) {
        s.push_back('0');
        gen(i + 1);
        s.pop_back();
    }
    if (cnt < k) {
        s.push_back('1');
        cnt++;
        gen(i + 1);
        cnt--;
        s.pop_back();
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    gen(0);
}