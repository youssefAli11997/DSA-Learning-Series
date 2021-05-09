// not accpeted yet

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int a[100002];
int n,k;

int calc_dist(int firstHill, int lastHill) {
    int dist = 0;
    for(int i=0; i<n; i++) {
        dist += max(abs(a[i] - firstHill), abs(a[i] - lastHill));
    }
    return dist;
}

int main() {
    int t; cin>>t;

    while(t--) {
        cin>>n>>k;
        for(int i=0; i<n; i++) {
            cin>>a[i];
        }

        sort(a, a+n);

        int firstHill, lastHill;

        if(n % 2 == 1) {
            int m = a[n/2];
            if(k % 2 == 1) {
                firstHill = m - k/2;
                lastHill = m + k/2;
            }
            else {
                firstHill = m - k/2 - 1;
                lastHill = m + k/2;
            }
        }
        else {
            int m1 = a[n-1]/2, m2 = a[n]/2;
            firstHill = m2 - k + 1;
            lastHill = m2;
        }

        cout<<calc_dist(firstHill, lastHill)<<endl;
    }

    return 0;
}