#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <bitset>

using namespace std;

using ll = long long;
using ui = unsigned int;

const int c = 6'250'000;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, w;
    cin >> n >> w;
    vector <int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    bitset <c + 1> b;
    b[c] = true;
    for (int i = 0; i < n; ++i) {
        bitset <c + 1> bs1;
        bs1 = b >> v[i];
        b = (bs1 | b);
        b[c - v[i]] = true;
    }
    if (b[c - w] == true) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
