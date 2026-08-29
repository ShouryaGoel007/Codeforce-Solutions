#include <bits/stdc++.h>
using namespace std;
bool areBookingsPossible(int arrival[],int departure[], int n, int k) {
    sort(arrival, arrival+n);
    sort(departure, departure+n);
    int i=0,j=0;
    int guest=INT_MIN;
    int cur=0;
    while (i<n && j<n) {
        if (arrival[i]<departure[j]) {
            i++;
            cur++;
            guest=max(guest,cur);
        }
        else {
            cur--;
            j++;
        }
    }
    return guest<=k;
}
int main() {
    int n, k;
    cin >> n >> k;

    int arrival[n], departure[n];

    for (int i = 0; i < n; i++)
        cin >> arrival[i];

    for (int i = 0; i < n; i++)
        cin >> departure[i];

    if (areBookingsPossible(arrival, departure, n, k))
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}