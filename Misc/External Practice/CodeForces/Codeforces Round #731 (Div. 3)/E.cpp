#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
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
        int n,k;
        cin>>n>>k;

        int a[k],tmp[k];

        for(int i=0; i<k; i++) cin>>a[i];
        for(int i=0; i<k; i++) cin>>tmp[i];

        pair<int,int> conds[k];

        for(int i=0; i<k; i++) {
            conds[i] = {a[i], tmp[i]};
        }

        sort(conds, conds + k);

    }

    return 0;
}