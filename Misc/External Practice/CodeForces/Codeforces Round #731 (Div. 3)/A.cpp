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
        int xa,ya,xb,yb,xf,yf;
        cin>>xa>>ya>>xb>>yb>>xf>>yf;
        int ans = 0;

        if(xa == xb) {
            if(xa == xf && (yf >= min(ya,yb) && yf <= max(ya,yb))) {
                ans = abs(ya - yb) + 2;
            }
            else {
                ans = abs(ya - yb);
            }
        }
        else if(ya == yb) {
            if(ya == yf && (xf >= min(xa,xb) && xf <= max(xa,xb))) {
                ans = abs(xa - xb) + 2;
            }
            else {
                ans = abs(xa - xb);
            }
        }
        else {
            ans = abs(xa - xb) + abs(ya - yb);
        }

        cout<<ans<<endl;
    }

    return 0;
}