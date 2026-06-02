#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        int a = t.size();
        sort(t.begin(), t.end());
        if (s[1] > s[0]) {
            for (int i = a - 1; i >= 0; i--) {
                if (t[i] == s[0]) {
                    int b = i;
                }
            }
        } else if (s[1] < s[0]) {
        }
    }
}