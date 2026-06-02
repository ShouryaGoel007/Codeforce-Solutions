# include  <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int a1=1,b1=n-1;


            for (int i=2;i*i<=n;i++) {
                if (n%i==0) {
                    a1=n/i;
                    b1=n-a1;
                    break;
                }
            }

        cout<<a1<<" "<<b1<<endl;
    }
}    