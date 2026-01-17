#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
#include <climits>

using namespace std;

using ll = long long;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;
    int n = s.length();
    vector <vector <string>> dp(n, vector <string> (n));
    int cnt = 0;
    for (int len = 1; len < n; len++) {
        for (int l = 0; l < n - len; l++) {
            int r = len + l;
            int e1 = s[l];
            dp[l][r] = dp[l + 1][r];
            if (e1 == '(' or e1 == '[' or e1 == '{') {
                int e2;
                if (e1 == '(') {
                    e2 = ')';
                } else if (e1 == '[') {
                    e2 = ']';
                } else {
                    e2 = '}';
                }
                int ind = -1;
                for (int k = l + 1; k <= r; k++) {
                    if (s[k] == e2) {
                        ind = k;
                        if (dp[l + 1][ind - 1].size() + dp[min(r, ind + 1)][r].size() + 2 > dp[l + 1][r].size()) {
                            dp[l][r] = s[l] + dp[l + 1][ind - 1] + s[ind] + dp[min(r, ind + 1)][r];
                        }
                    }
                }
            }
        }
    }
    cout << dp[0][n - 1] << endl;
    return 0;
}