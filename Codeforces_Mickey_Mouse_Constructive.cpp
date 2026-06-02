// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while (t--) {
//         int n,k;
//         cin>>n>>k;
//         vector<int> v1(n), v2(n);
//         for(int i=0;i<n;i++) {
//             cin>>v1[i];
//         }
//         for(int i=0;i<n;i++) {
//             cin>>v2[i];
//         }
//         int flag=-1;
//         for (int i=0;i<n;i++) {
//             if (count(v2.begin(),v2.end(),v1[i])>1) {flag=0    ;break;}
//             else {
//                 for (int j=0;j<n;j++) {
//                     if (v1[i]==v2[j] && j==i) {flag=1;}
//                     else if (v1[i]==v2[j] && j-i<n-k-1){flag=1;}
//                 }
//             }
//         }
//         if (flag==0)    cout<<"NO"<<endl;
//         else if (flag==-1) cout<<"YES"<<endl;
//         else cout<<"YES"<<endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;
long long count_divisors(long long n) {
    long long cnt = 0;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cnt++; // i
            if (i != n / i) cnt++; // n/i
        }
    }
    return cnt;
}
int main() {
    int t;
    cin>>t;
    while (t--) {
        int x,y;
        cin>>x>>y;
        int S=x-y;
        if (S!=0) {
            cout<<count_divisors(abs(S))<<endl;
        }
        else {
            cout<<min(x,y)<<endl;
        }
        for (int i = 0; i < x; i++) cout << 1 << " ";
        for (int i = 0; i < y; i++) cout << -1 << " ";
        cout << "\n"
    }
}