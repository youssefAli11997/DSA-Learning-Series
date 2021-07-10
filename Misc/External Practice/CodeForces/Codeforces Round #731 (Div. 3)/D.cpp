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
        int x[n];
        int y[n];

        for(int i=0; i<n; i++) cin>>x[i];

        y[0] = 0;
        for(int i=1; i<n; i++) {
            int tar = x[i-1] ^ y[i-1];
            y[i] = 0;
            for(int b=0; b<32; b++) {
                if((tar >> b) % 2 == 1) {
                    if((x[i] >> b) % 2 == 0) {
                        y[i] |= 1 << b;
                    }
                }
            }
        }

        for(int i=0; i<n; i++) {
            cout<<y[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}