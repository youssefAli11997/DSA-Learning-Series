#include <iostream>

using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int n,m; cin>>n>>m;
        int x,y; cin>>x>>y;
        int a,b; cin>>a>>b;

        int tdist = n-x + m-y;
        int pdist = 0;

        if(a == n) {
            pdist = m-b;
        }
        else if(b == m) {
            pdist = n-a;
        }
        else {
            int diamoves = min(n-a, m-b);
            a += diamoves;
            b += diamoves;
            pdist = diamoves + n-a + m-b;
        }

        if(pdist < tdist) cout<<"no\n";
        else cout<<"yes\n";
    }

    return 0;
}