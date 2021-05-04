#include <iostream>

using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int n; cin>>n;
        bool prime = true;
        for(long long i=2; i*i<=n; i++) {
            if(n % i == 0) {
                prime = false;
                break;
            }
        }
        cout<<(prime && n != 1? "yes" : "no")<<endl;
    }

    return 0;
}