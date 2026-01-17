#include <iostream>
#include <vector>
#include <climits>
#include <deque>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector <int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    deque <int> d;
    for (int i = 0; i < n; ++i) {
        if (d.front() == i - k and i >= k) {
            d.pop_front();
        }
        while (d.size() > 0 and v[i] <= v[d.back()]) {
            d.pop_back();
        }
        d.push_back(i);
        if (i >= k - 1) {
            cout << v[d.front()] << endl;
        }
    }
}