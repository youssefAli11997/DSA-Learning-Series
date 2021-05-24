#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <utility>
#include <stack>
#include <queue>

using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int n,m; cin>>n>>m;
        int a[n];
        bool found = false;

        for(int i=0; i<n; i++) cin>>a[i];

        // trying all subsets (brute force)
        for(int mask = 1; mask < (1 << n); mask++) {
            int sum = 0;
            for(int i=0; i<n; i++) {
                if(mask & (1 << i)) sum += a[i];
            }

            if(sum == m) {
                found = true;
                break;
            }
        }

        cout<<(found ? "Yes" : "No")<<'\n';

    }

    return 0;
}