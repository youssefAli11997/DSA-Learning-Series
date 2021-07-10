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
        int k,n,m; cin>>k>>n>>m;
        int a[n], b[m];

        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<m; i++) cin>>b[i];

        int i = 0, j = 0;
        vector<int> seq;
        bool ok = true;

        while(i < n && j < m) {
            if(a[i] == 0) {
                seq.push_back(a[i]);
                i++;
                k++;
            }
            else if(b[j] == 0) {
                seq.push_back(b[j]);
                j++;
                k++;
            }
            else if(a[i] <= k) {
                seq.push_back(a[i]);
                i++;
            }
            else if(b[j] <= k) {
                seq.push_back(b[j]);
                j++;
            }
            else {
                ok = false;
                cout<<"-1";
                break;
            }
        }

        if(ok) while(i < n) {
            if(a[i] == 0) {
                seq.push_back(a[i]);
                i++;
                k++;
            }
            else if(a[i] <= k) {
                seq.push_back(a[i]);
                i++;
            }
            else {
                ok = false;
                cout<<"-1";
                break;
            }
        }

        if(ok) while(j < m) {
            if(b[j] == 0) {
                seq.push_back(b[j]);
                j++;
                k++;
            }
            else if(b[j] <= k) {
                seq.push_back(b[j]);
                j++;
            }
            else {
                ok = false;
                cout<<"-1";
                break;
            }
        }

        if(ok) for(int i=0; i<seq.size(); i++) {
            cout<<seq[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}