#include <iostream>

using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int n, count = 0; cin>>n;
        while(n) {
            count += (n % 10 == 4);
            n /= 10;
        }
        cout<<count<<endl;
    }

    return 0;
}