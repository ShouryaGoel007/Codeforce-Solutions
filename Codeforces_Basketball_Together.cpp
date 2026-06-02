# include  <bits/stdc++.h>
using namespace std;
int main(){
    int n, d;
    cin>>n>>d;
    vector<int> v1(n);
    for(int i=0;i<n;i++) {
        cin>>v1[i];
    }
    int b=1;
    sort(v1.begin(),v1.end());
    int left=0,right=n-1,team=0;
    while (left<=right) {
        int a=v1[right];
        int need=d/a+1;
        if (right-left+1>=need) {
            left+=d/a;
            right-=1;
            team+=1;
        }
        else break;
    }
    cout<<team<<endl;
}    