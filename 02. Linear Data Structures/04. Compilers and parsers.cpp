#include <iostream>

using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        string s; cin>>s;
        int open = 0, ans = 0;

        for(int i=0; i<s.size(); i++) {
            if(s[i] == '<') open++;
            else open--;

            if(open == 0) ans = i + 1;
            else if(open < 0) {
                ans = i;
                break;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}