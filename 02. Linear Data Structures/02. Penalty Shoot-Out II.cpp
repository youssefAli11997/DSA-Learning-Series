#include <iostream>

using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int n, sa = 0, sb = 0; cin>>n;
        string s; cin>>s;
        int ans = 2 * n;

        for(int i=0; i<2*n; i++) {
            int shootNumber = i/2 + 1;
            if(i % 2 == 0) { // A's turn
                if(s[i] == '1') {
                    sa++;
                    if(sa > sb + (n-shootNumber+1)) {
                        ans = i+1;
                        break;
                    }
                }
                else {
                    if(sa + (n-shootNumber) < sb) {
                        ans = i+1;
                        break;
                    }
                }
            }
            else { // B's turn
                if(s[i] == '1') {
                    sb++;
                    if(sb > sa + (n-shootNumber)) {
                        ans = i+1;
                        break;
                    }
                }
                else {
                    if(sb + (n-shootNumber) < sa) {
                        ans = i+1;
                        break;
                    }
                }
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}