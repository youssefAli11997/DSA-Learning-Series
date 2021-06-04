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
        int n; int not_des = 0; cin>>n;
        string s; cin>>s; string effect = s;

        for(int i=0; i<n; i++) {
            if(s[i] == '1') {
                effect[i] = '1';
                if(i == 0) effect[i+1] = '1';
                else if(i == n-1) effect[i-1] = '1';
                else {
                    effect[i-1] = effect[i+1] = '1';
                }
            }
        }

        for(int i=0; i<n; i++) if(effect[i] == '0') not_des++;

        cout<<not_des<<endl;
    }

    return 0;
}