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

        int a[k],tmp[k],c[n] = {0},l[n] = {0},r[n] = {0};

        for(int i=0; i<k; i++) cin>>a[i];
        for(int i=0; i<k; i++) cin>>tmp[i];

        for(int i=0; i<k; i++) {
            c[a[i]-1] = tmp[i];
        }
        
        l[n-1] = c[n-1];
        for(int i=n-2; i>=0; i--) {
            if(c[i] == 0) {
                if(l[i+1] > 0) l[i] = l[i+1] + 1;
                else l[i] = 0;
            }
            else {
                if(l[i+1] > 0) l[i] = min(l[i+1] + 1, c[i]);
                else l[i] = c[i];
            }
        }

        r[0] = c[0];
        for(int i=1; i<n; i++) {
            if(c[i] == 0) {
                if(r[i-1] > 0) r[i] = r[i-1] + 1;
                else r[i] = 0;
            }
            else {
                if(r[i-1] > 0) r[i] = min(r[i-1] + 1, c[i]);
                else r[i] = c[i];
            }
        }
        
        for(int i=0; i<n; i++) {
            if(l[i] == 0) cout<<r[i];
            else if(r[i] == 0) cout<<l[i];
            else cout<<min(r[i], l[i]);
            cout<<" ";
        }
        cout<<endl;

    }

    return 0;
}