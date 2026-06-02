#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while (t--) {
        long long n;
        cin>>n;
        int t_min=0, t_max=0;
        if (n%2!=0 ||n<4) cout<<-1<<endl;
        else if (n==4)cout <<1 <<" "<<1<<endl;
        else{
            cout<<(5+n)/6<<" "<<n/4<<endl;
        }
    }
}