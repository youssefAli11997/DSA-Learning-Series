#include <iostream>
#include <string>

using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        string J,s; cin>>J>>s;
        int cnt = 0;

        for(int i=0; i<s.size(); i++) {
            for(int j=0; j<J.size(); j++) {
                if(s[i] == J[j]) {
                    cnt++;
                    break;
                }
            }
        }

        cout<<cnt<<endl;
    }

    return 0;
}