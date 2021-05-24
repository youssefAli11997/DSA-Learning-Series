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
        int n; string s; cin>>n>>s;
        int ones = 0;

        for(int i=0; i<n; i++) if(s[i] == '1') ones++;

        cout<<1ll * ones * (ones + 1) / 2<<endl;

        // // also correct approach (accepted), but not so optimized
        // long long cnt = 0;
        // int ones_after[n] = {0};

        // for(int i=n-1; i>=0; i--) {
        //     if(s[i] == '1') ones++;
        //     ones_after[i] = ones;
        // }

        // for(int i=0; i<n; i++) {
        //     if(s[i] == '1') {
        //         cnt += ones_after[i];
        //     }
        // }

        // cout<<cnt<<endl;
    }

    return 0;
}