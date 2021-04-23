#include <iostream>

using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int n, mp = 0, s,p,v; cin>>n;

        for(int i=0; i<n; i++) {
            cin>>s>>p>>v;
            mp = max(mp, p / (s+1) * v);
        }

        cout<<mp<<endl;
    }

    return 0;
}