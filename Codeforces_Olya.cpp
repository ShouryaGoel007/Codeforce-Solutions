#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--) {
        long long n;
        cin>>n;
        vector<vector<long long>> v1(n);
        for(long long i=0;i<n;i++) {
            long long m;
            cin>>m;
            v1[i].resize(m);
            for (long long j=0;j<m;j++) {
                cin>>v1[i][j];
            }
        }
        for (long long i=0;i<n;i++) {
            sort(v1[i].begin(),v1[i].end());
        }
        vector<long long> v2(n);
        vector<long long> v3(n);
        for (long long i=0;i<n;i++) {
            v2[i]=v1[i][0];
            v3[i]=v1[i][1];
        }
        sort(v2.begin(),v2.end());
        sort(v3.begin(),v3.end());
        long long sum=0;
        for (long long i=0;i<n;i++) {
            sum+=v3[i];
        }
        sum-=*min_element(v3.begin(),v3.end());
        sum+=*min_element(v2.begin(),v2.end());
        cout<<sum<<endl;
    }
}    