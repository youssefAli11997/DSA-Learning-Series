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
        int x,y,k,n; cin>>x>>y>>k>>n;
        bool lucky = false;
        int needs = x-y;

        for(int i=0; i<n; i++) {
            int p,c; cin>>p>>c;

            if(p >= needs && k >= c) {
                lucky = true;
            } 
        }

        cout<<(lucky? "LuckyChef" : "UnluckyChef")<<'\n';
    }

    return 0;
}