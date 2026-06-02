// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int t;
    cin >>t;
    while(t--){
        int a,b,c,d;
        cin >> a>> b >>c >>d;
        int k=d-b;
        int l =k-c+a;
        if(k>=0 && l>=0)
            cout <<k+l<<endl;
        else cout <<-1<<endl;
    }

    return 0;
}