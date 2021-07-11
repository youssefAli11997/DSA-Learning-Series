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
        pair<int,int> a[n];

        for(int i=0; i<n; i++) {
            int x;
            cin>>x;
            a[i] = {x, 0};
        }

        bool ok = false;

        while(!ok) {
            bool swaps = false;

            for(int i=0; i<n-1; i++) {
                if(a[i].first > a[i+1].first
                ||(a[i].first == a[i+1].first && a[i].second == 1 && a[i+1].second == 1)
                ||(a[i].first < a[i+1].first && (a[i].second == 1 && a[i+1].second == 1))) {
                    swaps = true;
                    pair<int,int> tmp = {a[i].first, 1 - a[i].second};
                    a[i] = {a[i+1].first, 1 - a[i+1].second};
                    a[i+1] = tmp;
                }
            }
            if(!swaps) ok = true;
        }

        string ans = "YES";
        for(int i=0; i<n; i++) {
            if(a[i].second != 0) {
                ans = "NO";
                break;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}