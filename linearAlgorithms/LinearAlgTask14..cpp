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
    int n;
    cin >> n;
    vector <pair<int, int>> v;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int h1, t1, s1, h2, t2, s2;
        cin >> h1 >> t1 >> s1 >> h2 >> t2 >> s2;
        int time1 = h1 * 3600 + t1 * 60 + s1;
        int time2 = h2 * 3600 + t2 * 60 + s2;
        if (time1 == time2) {
            time1 = 0;
            time2 = 86400;
        }
        if (time1 > time2) {
            v.emplace_back(time1, 1);
            v.emplace_back(86400, -1);
            v.emplace_back(0, 1);
            v.emplace_back(time2, -1);
        } else {
            v.emplace_back(time1, 1);
            v.emplace_back(time2, -1);
        }
    }
    sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
        return a.first < b.first;
    });
    int ans = 0;
    for (int i = 0; i < v.size(); i++) {
        cnt += v[i].second;
        if (cnt == n) {
            ans += (v[i + 1].first - v[i].first);
        }
    }
    cout << ans << endl;
    return 0;
}