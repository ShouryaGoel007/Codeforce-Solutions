#include <bits/stdc++.h>
using namespace std;

int main() { int t; cin >> t; while(t--) { int n; cin >> n; string st=""; cin >>st; int left=0,right=st.size()-1; while (left<right) { if (st[left]!=st[right]) { st.erase(left,1); st.erase(right-1,1); right=st.size()-1; } else { break; } } cout<<st.size()<<endl; } }
