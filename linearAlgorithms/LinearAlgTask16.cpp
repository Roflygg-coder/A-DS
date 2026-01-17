    #include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <climits>

using namespace std;

using ll = long long;
using ull = unsigned long long;

int main() {
    ll n, m, k;
    cin >> n >> m >> k;
    vector <ll> v(n);
    for (ll i = 0; i < n; ++i) {
        cin >> v[i];
    }
    vector <vector <ll>> oper(m, vector <ll> (3));
    for (ll i = 0; i < m; ++i) {
        cin >> oper[i][0] >> oper[i][1] >> oper[i][2];
    }
    vector <vector <ll>> ask(k, vector <ll> (2));
    for (ll i = 0; i < k; ++i) {
        cin >> ask[i][0] >> ask[i][1];
    }
    vector <ll> rask(m + 1, 0);
    for (ll i = 0; i < ask.size(); ++i) {
        rask[ask[i][0] - 1]++;
        rask[ask[i][1]]--;
    }
    vector <ll> prefask(m + 2, 0);
    for (ll i = 0; i < rask.size(); ++i) {
        prefask[i + 1] = prefask[i] + rask[i];
    }
    vector <ll> rv(n + 1, 0);
    for (ll i = 0; i < oper.size(); ++i) {
        rv[oper[i][0] - 1] += oper[i][2] * prefask[i + 1];
        rv[oper[i][1]] -= oper[i][2] * prefask[i + 1];
    }
    vector <ll> prefrv(n + 2, 0);
    for (ll i = 0; i < rv.size(); ++i) {
        prefrv[i + 1] = prefrv[i] + rv[i];
    }
    for (ll i = 1; i < prefrv.size() - 1; ++i) {
        cout << prefrv[i] + v[i - 1] << " ";
    }
}
