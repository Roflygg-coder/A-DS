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

struct times {
    int first;
    int second;
    int index;

    times(int first=0, int second=0, int index=0) {
        this->first = first;
        this->second = second;
        this->index = index;
    }
};

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector <times> v(n);
    for (int i =0 ; i < n; i++) {
        cin >> v[i].first >> v[i].second;
        v[i].index = (i + 1);
    }
    sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
        return a.second < b.second;
    });
    int m = -1;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (m <= v[i].first) {
            cnt++;
            m = v[i].second;
            cout << v[i].index << " ";
        }
    }
}