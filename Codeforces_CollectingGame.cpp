#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;

        vector<int> v1(n);
        for(int i=0;i<n;i++) {
            cin>>v1[i];
        }

        vector<pair<int,int>> v2;
        for (int i=0;i<n;i++) {
            v2.push_back({v1[i],i});
        }

        sort(v2.begin(),v2.end());

        // not able to write code but got the logic of first now calucalting prefix sums and then seeing that this fucking sum
        // is gr8r than how many numbers and then that will be the answer for that particular i.
}