#include <iostream>

using namespace std;

int main() {
    int t,n; cin>>t;
    int fact[21];
    fact[0] = fact[1] = 1;

    for(int i=2; i<21; i++) {
        fact[i] = i * fact[i-1];
    }

    while(t--) {
        cin>>n;
        cout<<fact[n]<<endl;
    }

    return 0;
}