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
    int a,b; cin>>a>>b;
    int hours = 0;

    while(a) {
        if((hours + 1) % b == 0) a++;
        a--;
        hours++;
    }

    cout<<hours<<endl;

    return 0;
}