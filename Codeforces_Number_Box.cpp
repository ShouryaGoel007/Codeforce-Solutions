# include  <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--) {
        int n,m;
        cin>>n>>m;
        int pos=0,neg=0,neg_sum=0;
        vector<vector<int>> v1(n,vector<int>(m));
        int abc=INT_MAX;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                int d;
                cin>>d;
                v1[i][j]=d;
                abc=min(abc,abs(d));
                if (d>0) pos+=d;
                else {neg+=1;;neg_sum+=d;}
            }
        }
        if (neg%2==0) {
            cout<<pos+abs(neg_sum)<<endl;
        }
        else {
            cout<<pos+abs(neg_sum)-2*abc<<endl;
        }

    }
}    