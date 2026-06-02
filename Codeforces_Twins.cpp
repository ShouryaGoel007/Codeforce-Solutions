#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v1(n);

    for(int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    sort(v1.begin(), v1.end(), greater<int>());

    int total = 0;
    for(int x : v1) total += x;

    int curr = 0;

    for(int i = 0; i < n; i++) {
        curr += v1[i];
        if(curr > total - curr) {
            cout << i + 1 << endl;
            return 0;
        }
    }
}