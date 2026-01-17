#include <iostream>
#include <vector>
#include <climits>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector <pair<int, int>> v;
    v.emplace_back(INT_MIN, INT_MIN);
    for (int i = 0; i < n; ++i) {
        int w, h;
        cin >> w >> h;
        v.emplace_back(w, h);
    }
    v.emplace_back(INT_MIN, INT_MIN);
    vector <int> str(1, 0);
    vector <int> stl(1, 0);
    vector <int> ansr(n + 2);
    vector <int> ansl(n + 2);
    for (int i = 1; i <= n; ++i) {
        while (v[str.back()].second > v[i].second) {
            ansr[str.back()] = i;
            str.pop_back();
        }
        str.push_back(i);
        while (v[stl.back()].second >= v[i].second) {
            stl.pop_back();
        }
        ansl[i] = stl.back();
        stl.push_back(i);
    }
    vector <int> pref(n + 1);
    for (int i = 1; i <= n; ++i) {
        pref[i] = pref[i - 1] + v[i].first;
    }
    int res = INT_MIN;
    for (int i = 1; i < ansr.size() - 1; ++i) {
        int l = ansl[i];
        int r;
        if (ansr[i] == 0) {
            r = n;
        } else {
            r = ansr[i] - 1;
        }
        if ((pref[r] - pref[l]) * v[i].second > res) {
            res = (pref[r] - pref[l]) * v[i].second;
        }
    }
    cout << res << endl;
    return 0;
}