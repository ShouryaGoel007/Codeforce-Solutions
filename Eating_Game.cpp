# include  <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--) {
        int n;
        cin >>n;
        vector<int> v1(n);
        for (int i=0;i<n;i++) {
            cin>> v1[i];
        }
        int a=*max_element(v1.begin(),v1.end());
        cout<<count(v1.begin(),v1.end(),a)<<endl;

    }
}    