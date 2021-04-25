#include <iostream>

using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int n,m; cin>>n>>m;
        int x,y; cin>>x>>y;

        for(int i=0; i<n; i++) {
            string r; cin>>r;
            int f = 0, p = 0;
            for(int j=0; j<m; j++) {
                if(r[j] == 'F') f++;
                if(r[j] == 'P') p++;
            }
            if(f >= x || (f == x-1 && p >= y)) cout<<'1';
            else cout<<'0';
        }

        cout<<endl;
    }

    return 0;
}