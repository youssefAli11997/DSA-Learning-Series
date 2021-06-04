#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <utility>
#include <stack>
#include <queue>

using namespace std;

int main() {
    long long n; cin>>n;
    cout<<n<<" ";

    while(n > 1) {
        if(n % 2 == 0) {
            n /= 2;
        }
        else {
            n = 3*n+1;
        }
        cout<<n<<" ";
    }

    return 0;
}