#include <iostream>

using namespace std;

int main() {
    int n; cin>>n;
    long long odds = 0, evens = 2*n;

    for(int i=0; i<n; i++) {
        odds += 2*i + 1;
        evens += 2*i;
    }

    cout<<odds<<" "<<evens<<endl;

    return 0;
}