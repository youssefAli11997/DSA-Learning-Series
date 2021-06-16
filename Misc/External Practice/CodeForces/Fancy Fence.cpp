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
    int t; cin>>t;

    while(t--) {
        int a; cin>>a;

        if(360 % (180 - a) == 0) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}