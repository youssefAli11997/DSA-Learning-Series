#include <iostream>

using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int n; string s; cin>>n>>s;
        int balance = 0, steps = 0;

        for(int i=0; i<n; i++) {
            balance += s[i] == '(' ? 1 : -1;
            if(balance < 0) steps++, balance = 0;
        }

        cout<<steps<<endl;
    }

    return 0;
}