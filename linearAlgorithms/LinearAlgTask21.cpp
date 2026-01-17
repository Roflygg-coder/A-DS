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

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector <pair<ll, ll>> v;
    for (ll i = 0; i < n; i++) {
        ll s, e;
        cin >> s >> e;
        v.emplace_back(s, 1);
        v.emplace_back(e, -1);
    }
    sort(v.begin(), v.end(), [](const pair<ll, ll>a, const pair<ll, ll> b){
        if (a.first == b.first) {
            return a.second > b.second;
        }
        return a.first < b.first;
    });
    vector <ll> vec(n);
    ll bal = 0;
    ll ans1 = 0, ans2 = 0;
    ll l = 0;
    for (ll i = 0; i < v.size(); i++) {
        if (bal + v[i].second > bal) {
            l = v[i].first;
            bal += v[i].second;
        } else {
            if (ans1 < bal) {
                ans1 = bal;
                ans2 = l;
            }
            bal += v[i].second;
        }
    }
    cout << ans1 << " " << ans2;
}
