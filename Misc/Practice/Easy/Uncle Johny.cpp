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
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        int k; cin>>k;
        int song = a[k-1];

        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                if(a[j] < a[i]) {
                    int tmp = a[j];
                    a[j] = a[i];
                    a[i] = tmp;
                }
            }
        }

        for(int i=0; i<n; i++) if(a[i] == song) {
            cout<<i+1<<endl;
            break;
        }
    }

    return 0;
}