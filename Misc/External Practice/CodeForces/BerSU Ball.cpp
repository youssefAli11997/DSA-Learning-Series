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
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    int m; cin>>m;
    int b[m];
    for(int i=0; i<m; i++) cin>>b[i];

    sort(a, a+n);
    sort(b, b+m);

    int x = 0, y = 0, pairs = 0;

    for( ; x < n && y < m ; ) {
        if(abs(a[x] - b[y]) <= 1) {
            pairs++;
            x++;
            y++;
        }
        else if(a[x] > b[y]) {
            y++;
        }
        else if(b[y] > a[x]) {
            x++;
        }
    }

    cout<<pairs<<endl;

    return 0;
}