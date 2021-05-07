// wrong solution

#include <iostream>

using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int n,m, divisors = 0; cin>>n>>m;
        int cnt = n-1;

        for(int i=2; i<=min(n,m); i++) {
            if(m % i == 0) divisors++;
        }
        
        if(divisors)
            cnt += divisors * (divisors - 1) / 2;

        cout<<cnt<<endl;
    }

    return 0;
}