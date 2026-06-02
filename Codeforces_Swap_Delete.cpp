#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (count(s.begin(),s.end(),'0')==count(s.begin(),s.end(),'1')) {
            cout<<"0"<<endl;
        }
        else {
            int Z=count(s.begin(),s.end(),'0');
            int O=count(s.begin(),s.end(),'1');
            int z,o;
            for (int i=0;i<s.size();i++) {
                if (s[i]=='0') {
                    z++;
                }
                else {
                    o++;
                }
            }
            if (z)
        }
    }
}    