#include <bits/stdc++.h>
using namespace std;

int main() {
    int t2;
    cin >> t2;

    while (t2--) {
        string s, t;
        cin >> s >> t;

        int n = s.size();
        int m = t.size();

        bool flag = true;
        int point = n - 1;
        for (int i = m - 1; i >= 0; i--) {
            bool found = false;

            for (int j = n-1; j >= 0; j--) {
                if (s[j] == t[i]) {
                    if (point>j) {
                        point=j;
                        found=true;
                        break;
                    }
                    else {
                        found=false;
                        flag=false;
                        break;
                    }
                }
            }

            if (!found) {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
