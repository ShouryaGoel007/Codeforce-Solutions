# include  <bits/stdc++.h>
using namespace std;
bool check(int d) {
    int c=-1;
    if (d==2) {
        return true;
    }
    for (int i=2;i*i<=d;i++) {
        if (d%i==0) {
            return false;
        }

    }
return true;
}
int main(){
    int t;
    cin>>t;
    while(t--) {
        int d;
        cin>>d;
        int divf,divs;
        divf=1+d;
while (!(check(divf))){
divf++;}
        divs=divf+d;
while (!(check(divs)) ){
    divs++;
}
        cout<<divf*divs<< endl;
    }
}    