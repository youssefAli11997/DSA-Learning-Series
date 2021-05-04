#include <iostream>
#include <cmath>
#include <algorithm>
#include <utility>

using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        long long r, x = 0, maxX = 0; int n; cin>>n>>r;
        pair<int, int> ex[n];

        for(int i=0; i<n; i++) cin>>ex[i].first;
        for(int i=0; i<n; i++) cin>>ex[i].second;

        sort(ex, ex+n);

        x = maxX = ex[0].second;

        for(int i=1; i<n; i++) {
            x = max(0ll, x - r * (ex[i].first - ex[i-1].first));
            x += ex[i].second;
            maxX = max(x, maxX);
        }

        cout<<maxX<<endl;
    }

    return 0;
}