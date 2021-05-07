#include <iostream>

#define MOD 1000000007

int power(long long x, int n) {
    int res = 1;
 
    while (n > 0)
    {
        // If n is odd, multiply x with result
        if (n & 1)
            res = (res*x) % MOD;
 
        n = n>>1;
        x = (x*x) % MOD;
    }
    return res;
}

using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int n; cin>>n;
        cout<<power(2, n-1) % MOD<<endl;
    }

    return 0;
}