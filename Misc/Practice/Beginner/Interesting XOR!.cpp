// I really like this problem

#include <iostream>
#include <cmath>

using namespace std;

bool isPowOf2(int n) {
    return (n & (n-1)) == 0;
}

int main() {
    int t; cin>>t;

    while(t--) {
        int c; cin>>c;
        int a = 0,b = 0, d, lg2c = ceil(log2(c));
        
        if(isPowOf2(c)) d = lg2c + 1;
        else d = ceil(lg2c);

        for(int i=d-1; i>=0; i--) {
            if(c & (1 << i)) {
                if(i == d-1) {
                    a |= 1 << i;
                }
                else {
                    b |= 1 << i;
                }
            }
            else {
                a |= 1 << i;
                b |= 1 << i;
            }
        }

        cout<<1ll * a * b<<endl;
    }

    return 0;
}