#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <queue>
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
    vector <ll> v(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }
    if (n % 2 != 0 || sum % 2 != 0) {
        cout << -1 << endl;
    } else {
        vector <vector <vector<ll>>> dp(n + 1, vector <vector<ll>>((sum / 2) + 1, vector<ll>((n / 2) + 1)));
        dp[0][0][0] = 1;
        for (ll i = 1; i <= n; i++) {
            for (ll j = 0; j <= (sum / 2); j++) {
                for (ll k = 0; k <= n / 2; k++) {
                    if (dp[i - 1][j][k] == 1) {
                        if (j + v[i - 1] <= (sum / 2) && k + 1 <= n / 2) {
                            dp[i][j + v[i - 1]][k + 1] = 1;
                        }
                        dp[i][j][k] = 1;
                    }
                }
            }
        }
        vector <ll> ans(n, 0);
        if (dp[n][sum / 2][n / 2] == 1) {
            ll cnt = n / 2;
            ll sm = sum / 2;
            for (ll ind = n; ind > 0; ind--) {
                if (sm - v[ind - 1] >= 0 && cnt > 0 && dp[ind - 1][sm - v[ind - 1]][cnt - 1] == 1) {
                    ans[ind - 1] = 1;
                    cnt--;
                    sm -= v[ind - 1];
                }
            }
                for (ll i = 0; i < ans.size(); i++) {
                    if (ans[i] == 1) {
                        cout << i + 1 << " ";
                    }
                }
                cout << endl;
                for (ll i = 0; i < ans.size(); i++) {
                    if (ans[i] == 0) {
                        cout << i + 1 << " ";
                    }
                }
                cout << endl;
        } else {
            cout << -1 << endl;
        }
        return 0;
    }
}
