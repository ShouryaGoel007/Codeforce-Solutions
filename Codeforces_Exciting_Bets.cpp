#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long a,b;
        cin >> a >> b;

        if(a==b){
            cout << "0 0\n";
            continue;
        }

        long long d = llabs(a-b);
        long long r = a % d;
        long long moves = min(r, d-r);

        cout << d << " " << moves << "\n";
    }
}