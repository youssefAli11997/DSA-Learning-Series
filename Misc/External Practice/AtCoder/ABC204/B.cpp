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
    int n, x, total = 0; cin>>n;

    for(int i=0; i<n; i++) {
        cin>>x;
        if(x > 10) total += x - 10;
    }

    cout<<total<<endl;

    return 0;
}