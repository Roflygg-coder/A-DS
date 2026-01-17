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
    vector <pair<ll, ll>> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());

    ll cnt = 0;
    ll r = v[0].second, l = v[0].first;
    for (ll i = 1; i < n; i++) {
        if (r < v[i].second and v[i].first <= r) {
            r = v[i].second;
        } else if (v[i].first > r){
            cnt += (r - l);
            l = v[i].first;
            r = v[i].second;
        }
    }
    cnt += (r - l);
    cout << cnt << endl;
}