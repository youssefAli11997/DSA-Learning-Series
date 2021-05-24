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
    int n,m; cin>>n>>m;
    pair<int, int> a[n], b[m];

    for(int i=0; i<n; i++) cin>>a[i].first, a[i].second = i;
    for(int i=0; i<m; i++) cin>>b[i].first, b[i].second = i;

    sort(a, a+n);
    sort(b, b+m);

    for(int i=0; i<m; i++) { // m pairs
        cout<<a[0].second<<" "<<b[i].second<<endl;
    }

    for(int i=1; i<n; i++) { // n-1 pairs
        cout<<a[i].second<<" "<<b[m-1].second<<endl;
    }

    return 0;
}