#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
#include <climits>

using namespace std;

using ll = long long;

ll n, k;
ll m = 1;
vector<ll> res;
ll ans = 0;
vector<ll> d;
void gen(int i) {
    if (res.size() == k) {
        ans++;
        return;
    }
    for (int j = i + 1; j < d.size(); j++) {
        if (m * d[j] > n) {
            return;
        }
        if ((res.size() == 0) || (res.size() != 0 and res.back() < d[j])) {
            if (res.size() != 0) {
                int a = res.back(), b = d[j];
                while (b != 0) {
                    int c = b;
                    b = a % b;
                    a = c;
                }
                if (a == 1) {
                    res.push_back(d[j]);
                    m *= d[j];
                    gen(j);
                    m /= d[j];
                    res.pop_back();
                }
            } else {
                res.push_back(d[j]);
                m *= d[j];
                gen(j);
                m /= d[j];
                res.pop_back();
            }
        }
    }
}

signed main() {
    cin >> n >> k;
    for (ll i = 1; i <= (n / 2); i++) {
        if (n % i == 0) {
            d.push_back(i);
        }
    }
    d.push_back(n);
    gen(-1);
    cout << ans << endl;
}