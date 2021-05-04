#include <iostream>

using namespace std;

int reverse_number(int n) {
    int rev = 0;
    while(n) {
        rev *= 10;
        rev += n % 10;
        n /= 10;
    }

    return rev;
}

int main() {
    int t; cin>>t;

    while(t--) {
        int n; cin>>n;
        if(n == reverse_number(n)) cout<<"wins";
        else cout<<"loses";
        cout<<endl;
    }

    return 0;
}