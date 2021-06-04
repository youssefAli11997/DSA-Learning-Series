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
    string s; cin>>s;
    int curr = 1, mx = 1, n = s.size();

    for(int i=1; i<n; i++) {
        if(s[i] == s[i-1]) curr++;
        else {
            mx = max(mx, curr);
            curr = 1;
        }
    }

    mx = max(mx, curr);
    cout<<mx<<endl;

    return 0;
}