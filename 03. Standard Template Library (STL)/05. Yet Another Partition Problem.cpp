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

#define SIZE 1000003

using namespace std;

int a[SIZE], groups[SIZE];

int parent(int i) {
    int par = groups[i];
    while(par != i) par = groups[par];
    return par;
}

int main() {
    int n,q; cin>>n>>q;
    int currentParent = 0;

    for(int i=0; i<n; i++) cin>>a[i];

    for(int i=1; i<n; i++) {
        if((a[i] % a[i-1]) == 0) groups[i] = currentParent;
        else {
            groups[i] = i;
            currentParent = i;
        }
    }

    for(int i=0; i<n; i++) cout<<groups[i]<<" "; cout<<endl;

    for(int i=0; i<q; i++) {
        int op, index; cin>>op>>index; index--;

        if(op == 1) {
            int x; cin>>x;
            // a[index] = x;

            // if(n == 1) continue;

            // if(index == 0 && parent(index) == parent(index+1) && a[index+1] % a[index] != 0) {
            //     groups[index] = index; // no need to say it explicitly
            //     groups[index+1] = index+1;
            // }

            // else if(parent(index) == parent(index-1) && a[index] % a[index-1] != 0) {
            //     groups[index] = index;
            // }
        }
        else {
            //...
        }
    }

    return 0;
}