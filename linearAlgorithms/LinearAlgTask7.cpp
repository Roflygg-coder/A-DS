#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector <int> v;
    v.push_back(-1e5 - 1);
    vector <int> ans(n + 2);
    vector <int> st;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        v.push_back(t);
    }
    v.push_back(-1e5 - 1);
    st.push_back(0);
    for (int i = 1; i <= n; ++i) {
        while (v[st.back()] > v[i]) {
            ans[st.back()] = i;
            st.pop_back();
        }
        st.push_back(i);
    }

    for (int i = 1; i < ans.size() - 1; ++i) {
        if (ans[i] >= n+1) {
            cout << -1 << " ";
        }else {
            cout << ans[i] - 1<< " ";
        }
    }
}