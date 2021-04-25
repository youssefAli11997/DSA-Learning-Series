#include <iostream>

using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int x,y,xr,yr,d;
        cin>>x>>y>>xr>>yr>>d;

        if(x/xr >= d && y/yr >= d) cout<<"yes\n";
        else cout<<"no\n";
    }

    return 0;
}