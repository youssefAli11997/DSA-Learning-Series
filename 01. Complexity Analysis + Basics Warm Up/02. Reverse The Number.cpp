#include <iostream>

using namespace std;

int reversed(int n) {
    int res = 0;

    while(n) {
        res *= 10;
        res += n % 10;
        n /= 10;
    }

    return res;
}

int main() {
    int t; cin>>t;

    while(t--) {
        int n; cin>>n;

        cout<<reversed(n)<<endl;
    }

    return 0;
}