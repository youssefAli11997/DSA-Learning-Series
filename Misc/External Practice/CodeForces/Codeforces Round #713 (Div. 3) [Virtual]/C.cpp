#include <iostream>

using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int a,b; cin>>a>>b;
        string s; cin>>s;
        int n = a+b;
        bool ok = false;

        for(int i=0; i<n; i++) {
            if(s[i] != '?' && s[n-1-i] == '?') {
                s[n-1-i] = s[i];
            }
            else if(s[n-1-i] != '?' && s[i] == '?') {
                s[i] = s[n-1-i];
            }

            if(s[i] == '0') a--;
            if(s[i] == '1') b--;
        }

        for(int i=0; i<n; i++) {
            if(s[i] == '?' && s[n-1-i] == '?') {
                if(a >= 2) {
                    s[i] = s[n-1-i] = '0';
                    a -= 2;
                }
                else if(b >= 2) {
                    s[i] = s[n-1-i] = '1';
                    b -= 2;
                }
                else if(n % 2 == 1) {
                    if(a) {
                        s[i] = '0';
                        a--;
                    }
                    else if(b) {
                        s[i] = '1';
                        b--;
                    }
                }
                else {
                    cout<<"-1\n";
                    ok = true;
                    break;
                }
            }
        }

        if(!ok) {
            if(a || b) {
                cout<<"-1\n";
                ok = true;
            }

            if(!ok) {
                for(int i=0; i<n; i++) {
                    if(s[i] != s[n-1-i]) {
                        cout<<"-1\n";
                        ok = true;
                        break;
                    }
                }
            }
        }

        if(!ok) {
            cout<<s<<endl;
        }
    }

    return 0;
}