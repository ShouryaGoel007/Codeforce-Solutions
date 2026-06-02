# include  <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int> v1(n);
        for(int i=0;i<n;i++) {
            cin>>v1[i];
        }
        int ans=INT_MAX;

        // LOOK AT THE FIRST SAMPLE CAASE TO GET AN IDEA.

        for (int i=0;i<n;i++) {
            if (v1[i]%k==0) {
                ans=0; break;
            }
            else{
                ans=min(ans,k-v1[i]%k);
            }
        }
        if(k==4){
            int even=0;
            for(int i=0;i<n;i++){
                if(v1[i]%2==0) even++;
            }
            ans=min(ans,max(0,2-even));
        }
            cout<<ans<<endl;
    }
}