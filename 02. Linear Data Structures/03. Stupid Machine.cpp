#include <iostream>

using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int n, s, mn; cin>>n;
        long long tokens = 0;

        for(int i=0; i<n; i++) {
            cin>>s;

            if(i == 0 || s <= mn) {
                tokens += s;
                mn = s;
            }
            else {
                tokens += mn;
            }
        }

        cout<<tokens<<endl;
    }

    return 0;
}