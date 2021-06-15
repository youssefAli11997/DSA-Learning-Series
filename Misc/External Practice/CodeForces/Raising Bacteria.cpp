#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <utility>
#include <stack>
#include <queue>
#include <cmath>

using namespace std;

int main() {
    int x; cin>>x;
    int ones = 0;

    while(x) {
        x &= x-1;
        ones++;
    }

    cout<<ones<<endl;

    return 0;
}