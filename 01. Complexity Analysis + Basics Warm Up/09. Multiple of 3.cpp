// not accepted yet

#include <iostream>

using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        long long k;
        int d0, d1, sum;
        cin>>k>>d0>>d1;
        sum = d0 + d1;
        if(k == 2) {
            if(sum % 3 == 0) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else {
            int rem = 0;
            switch ((k-3) % 4)
            {
            case 0:
            case 2:
                rem = 2;
                break;
            case 1:
                rem = 1;
                break;
            }
            if((rem * (sum % 10) % 3) % 3 == 0) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }

    return 0;
}