#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n1, n2, n3, n4;
    cin >> n1;
    vector <pair<int, int>> v;
    for (int i = 0; i < n1; ++i) {
        int t;
        cin >> t;
        v.emplace_back(t, 1);
    }
    cin >> n2;
    for (int i = 0; i < n2; ++i) {
        int t;
        cin >> t;
        v.emplace_back(t, 2);
    }
    cin >> n3;
    for (int i = 0; i < n3; ++i) {
        int t;
        cin >> t;
        v.emplace_back(t, 3);
    }
    cin >> n4;
    for (int i = 0; i < n4; ++i) {
        int t;
        cin >> t;
        v.emplace_back(t, 4);
    }
    sort(v.begin(), v.end());
    int i = 0;
    vector <int> b(4);
    int kel = 0;
    int ibest = 0, jbest = 0;
    int best = INT_MAX;
    for (int j = 0; j < (n1 + n2 + n3 + n4); ++j) {
        if (b[v[j].second - 1] == 0) {
            kel++;
        }
        b[v[j].second - 1]++;
        if (kel == 4) {
            while (b[v[i].second - 1] != 1) {
                b[v[i].second - 1]--;
                i++;
            }
            if (best > v[j].first - v[i].first) {
                best = v[j].first - v[i].first;
                ibest = i, jbest = j;
            }
            if (b[v[i].second - 1] == 1) {
                kel--;
            }
            b[v[i].second - 1]--;
            i++;
        }
    }
    vector <int> ans(4, -1);
    for (int i = ibest; i <= jbest; ++i) {
        if (ans[v[i].second - 1] == -1) {
            ans[v[i].second - 1] = v[i].first;
        }
    }
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << " ";
    }
}