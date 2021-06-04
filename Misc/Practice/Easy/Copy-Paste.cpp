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
        int n; cin>>n;
        set<int> si;

        for(int i=0; i<n; i++) {
            int x; cin>>x;
            si.insert(x);
        }

        cout<<si.size()<<endl;
    }

    return 0;
}