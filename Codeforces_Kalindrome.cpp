#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        int d1=-1,d2=-1;
        int left=0,right=n-1;
        while(left<right) {
            if (a[left]==a[right]) {
                left++;
                right--;
            }
            else {
                d1=a[left];
                d2=a[right];
                break;
            }
        }
        int flag1=0,flag2=0;
        left=0,right=n-1;

            while (left<right) {
                if (a[left]==d1) {
                    left++;
                }
                else if (a[right]==d1) {
                    right--;
                }
                else if (a[left]==a[right]){
                    right--;
                    left++;
                }
                else {
                    flag1=1;
                    break;
                }
            }
            left=0,right=n-1;
            while (left<right) {
                if (a[left]==d2) {
                    left++;
                }
                else if (a[right]==d2) {
                    right--;
                }
                else if (a[left]==a[right]){
                    right--;
                    left++;
                }
                else {
                    flag2=1;
                    break;
                }
            }

        if (flag1==0 || flag2==0) {cout<<"YES"<<endl;}
        else cout<<"NO"<<endl;
    }
}