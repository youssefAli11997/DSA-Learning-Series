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
        int n; cin>>n;
        int a[n], b[n], mx = 0;

        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];

        for(int i=0; i<n; i++) {
            mx = max(mx, 20 * a[i] - 10 * b[i]);
        }

        cout<<mx<<endl;
    }

    return 0;
}