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
    int n,m,a,b; cin>>n>>m>>a>>b;

    if(n <= m) cout<<min(a * n, b)<<endl;
    else {
        // n = n/m * m + n%m;
        // 1. choosing the best option for n/m * m rides
        int cost = min(n / m * b, n / m * m * a);
        // 2. choosing the best option for n%m rides
        cost += min(b, n % m * a);
        cout<<cost<<endl;
    }

    return 0;
}