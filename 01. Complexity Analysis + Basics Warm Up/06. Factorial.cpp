#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int n, fives = 0, div = 5; cin>>n;
        while(n/div) {
            fives += n/div;
            div *= 5;
        }
        
        cout<<fives<<endl;
    }

    return 0;
}