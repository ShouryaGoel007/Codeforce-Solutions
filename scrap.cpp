#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int k;
    cin>>k;
    int n=s.size();
    int l=0,r=0;
    while (r<n) {
        if (s[r]=='1') {
            k--;
        }
        while (k<0) {
            if (s[l]=='1') {
                k++;
            }
            l++;
        }
        
    }
}