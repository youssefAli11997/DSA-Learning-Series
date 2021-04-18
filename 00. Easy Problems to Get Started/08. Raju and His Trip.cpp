#include <iostream>

using namespace std;

int main() {
    int n; cin>>n;

    cout<<((n%5 == 0 || n%6 == 0)? "YES" : "NO")<<endl;

    return 0;
}