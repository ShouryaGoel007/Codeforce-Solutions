#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while (t--) {
        long long a,b,c,m;
        cin >> a >> b >> c >> m;
        // vector<long long> vis(m+1,-1);
        // long long all=lcm(a,lcm(b,c));
        // // for (long long i=all;i<=m;i+=all) {
        // //     if (vis[i]==-1) {
        // //         a1+=2;
        // //         a2+=2;
        // //         a3+=2;
        // //         vis[i]=1;
        // //     }
        // // }
        // a1+=m/all;
        // long long a1a2=lcm(a,b);
        // for (long long i=a1a2;i<=m;i+=a1a2) {
        //     if (vis[i]==-1) {
        //         a1+=3;
        //         a2+=3;
        //         vis[i]=1;
        //     }
        // }
        // long long a2a3=lcm(b,c);
        // for (long long i=a2a3;i<=m;i+=a2a3) {
        //     if (vis[i]==-1) {
        //         a2+=3;
        //         a3+=3;
        //         vis[i]=1;
        //     }
        // }
        // long long a1a3=lcm(a,c);
        // for (long long i=a1a3;i<=m;i+=a1a3) {
        //     if (vis[i]==-1) {
        //         a1+=3;
        //         a3+=3;                vis[i]=1;
        //
        //     }
        // }
        // for (long long i=a;i<=m;i+=a) {
        //     if (vis[i]==-1) {
        //         a1+=6;                vis[i]=1;
        //
        //     }
        // }
        // for (long long i=b;i<=m;i+=b) {
        //     if (vis[i]==-1) {
        //         a2+=6;                vis[i]=1;
        //
        //     }
        // }
        // for (long long i=c;i<=m;i+=c) {
        //     if (vis[i]==-1) {
        //         a3+=6;                vis[i]=1;
        //
        //     }
        // }
        // cout<<a1<<' '<<a2<<' '<<a3<<endl;
        long long A1=m/a;
        long long A2=m/b;
        long long A3=m/c;

        long long AB=m/lcm(a,b);
        long long AC=m/lcm(a,c);
        long long BC=m/lcm(b,c);

        long long ABC=m/lcm(a,lcm(b,c));

        long long onlyA=A1-AB-AC+ABC;
        long long onlyB=A2-AB-BC+ABC;
        long long onlyC=A3-AC-BC+ABC;

        long long onlyAB=AB-ABC;
        long long onlyAC=AC-ABC;
        long long onlyBC=BC-ABC;

        long long onlyABC=ABC;

        cout<<6*onlyA+3*onlyAB+3*onlyAC+2*onlyABC<<" "<<6*onlyB+3*onlyBC+3*onlyAB+2*onlyABC<<" "<<6*onlyC+3*onlyBC+3*onlyAC+2*onlyABC<<endl;
    }
}    