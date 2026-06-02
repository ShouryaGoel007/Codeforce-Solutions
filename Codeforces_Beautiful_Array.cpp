# include  <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while (t--) {
        long long n, k, b,s;
        cin>>n>>k>>b>>s;
        vector<long long> v1(n,0);
        if (s<k*b || s>k*b+(k-1)*n){
            cout<<-1<<endl;
        }

        else {
            v1[0]=k*b;
            long long rem=s-k*b;
            for (long long i=0;i<n;i++) {
                if (rem>0){
                    int a=min(rem,k-1);
                    v1[i]+=a;
                    rem-=a;
                }
                else break;
            }
            for (long long i: v1) cout << i << " ";
            cout << endl;
        }

    }
}