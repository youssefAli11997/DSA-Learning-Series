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
    int x,y; cin>>x>>y;

    if(x == y) cout<<x<<endl;
    else if(x + y == 1) cout<<2<<endl;
    else if(x + y == 2) cout<<1<<endl;
    else if(x + y == 3) cout<<0<<endl;

    return 0;
}