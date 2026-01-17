#include <iostream>
#include <vector>
#include <climits>
#include <deque>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, w;
    cin >> h >> w;
    vector <vector <int>> v;
    for (int i = 0; i < h; ++i) {
        string s;
        cin >> s;
        vector <int> t(w);
        for (int j = 0; j < w; ++j) {
            t[j] = s[j] - '0';
        }
        v.push_back(t);
    }
    vector <vector <int>> dp(h + 1, vector <int>(w + 2, -1));
    for (int i = 1; i <= h; ++i) {
        for (int j = 1; j <= w; ++j) {
            if (v[i - 1][j - 1] == 0) {
                dp[i][j] = 0;
            } else {
                dp[i][j] = max(dp[i - 1][j], 0) + v[i - 1][j - 1];
            }
        }
    }
    long long best = 0;

    for (int i = h; i > 0; --i) {
        vector <int> st(1, 0);
        vector <int> minr(w + 2);
        minr[0] = -1;
        minr[w + 1] = -1;
        for (int j = 1; j <= w + 1; ++j) {
            while (dp[i][st.back()] > dp[i][j]) {
                minr[st.back()] = j;
                st.pop_back();
            }
            st.push_back(j);
        }
        vector <int> dp2(w + 2, 0);
        for (int j = w; j > 0; j--) {
            dp2[j] = dp2[minr[j]] + dp[i][j] * (minr[j] - j);
            best = max(best, (long long)dp2[j]);
        }
    }
    cout << best << endl;
    return 0;

}