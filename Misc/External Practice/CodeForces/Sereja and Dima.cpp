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
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    int s = 0, d = 0, i=0, j=n-1; bool sturn = true;

    for(; i<n && j>=0;) {
        int val = max(a[i], a[j]);
        if(val == a[i]) i++;
        else j--;
        if(sturn) s+= val;
        else d+= val;
        sturn = !sturn;
    }

    cout<<s<<" "<<d<<endl;

    return 0;
}