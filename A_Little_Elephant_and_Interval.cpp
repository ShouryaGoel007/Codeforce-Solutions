//  A. Little Elephant and Interval

#include<bits/stdc++.h>

using namespace std;

long long cc(long long x) {
    if (x<10) return x;
    long long ans=x/10+9;
    long long first=to_string(x)[0]-'0';
    long long last=(x)%10;
    if (first>last) ans--;
    return ans;
}

int main() {
    long long l,r;
    cin>>l>>r;
    cout<<cc(r)-cc(l-1)<<endl;
    return 0;
}
