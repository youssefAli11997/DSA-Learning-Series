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
        int n; cin>>n;
        int a[n], b[n];

        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];

        int gr = 0, ls = 0, eq = 0;

        for(int i=0; i<n; i++) {
            if(a[i] > b[i]) gr++;
            if(a[i] < b[i]) ls++;
            if(a[i] == b[i]) eq++;
        }

        

        int ops = 0;
        vector<pair<int,int>> v;

        while(true) {
            int l = -1, g = -1;
            for(int i=0; i<n; i++) {
                if(a[i] < b[i] && l == -1) {
                    l = i;
                }
                if(a[i] > b[i] && g == -1) {
                    g = i;
                }
            }

            if(l == -1 && g == -1) {
                break;
            }
            else if(l == -1 || g == -1) {
                ops = -1;
                break;
            }
            else {
                a[g]--;
                a[l]++;
                ops++;
                v.push_back({g+1,l+1});
            }
        }

        if(ops == -1) cout<<-1<<endl;
        else {
            cout<<ops<<endl;
            for(int i=0; i<ops; i++) {
                cout<<v[i].first<<" "<<v[i].second<<endl;
            }
        }
    }

    return 0;
}