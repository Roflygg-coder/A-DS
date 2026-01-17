#include <iostream>
#include <iomanip>
#include <vector>
#include <deque>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int m;
    cin >> m;
    vector <int> k(m);
    for (int i = 0; i < m; ++i) {
        cin >> k[i];
    }
    for (int s = 0; s < m; ++s) {
        int i = 0, j = 0;
        int ibest = 0, jbest = 0;
        deque <int> maxel, minel;
        if (v[0] < v[1]) {
            maxel.push_back(1);
            minel.push_back(0);
        } else {
            maxel.push_back(0);
            minel.push_back(1);
        }
        while (j != n - 1) {
            j++;
            while (minel.size() != 0 && v[minel.back()] >= v[j]) {
                minel.pop_back();
            }
            if (minel.size() == 0 || minel.back() != j) {
                minel.push_back(j);
            }
            while (maxel.size() != 0 && v[maxel.back()] <= v[j]) {
                maxel.pop_back();
            }
            if (maxel.size() == 0 || maxel.back() != j) {
                maxel.push_back(j);
            }
            if (v[maxel.front()] - v[minel.front()] > k[s]) {
                i++;
                while (minel.size() != 0 && minel.front() < i) {
                    minel.pop_front();
                }
                while (maxel.size() != 0 && maxel.front() < i) {
                    maxel.pop_front();
                }
            }
            if (v[maxel.front()] - v[minel.front()] <= k[s] && jbest - ibest < j - i) {
                jbest = j, ibest = i;
            }
        }
        cout << ibest + 1 << " " << jbest + 1 << endl;
    }
}
