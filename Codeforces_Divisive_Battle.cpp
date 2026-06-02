#include <bits/stdc++.h>
using namespace std;
int prime(int a) {

}
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v1(n);
        for (int i=0;i<n;i++) {
            cin >> v1[i];
        }
        bool flag=true;
        for (int i=0;i<n-1;i++) {
            if (v1[i]>v1[i+1]) {
                flag=false;
                break;
            }
        }
        if (flag){ cout<<"Bob"<<endl;}
        else {

        }
    }
}    