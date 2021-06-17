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

    bool flag = true;

    while(flag) {
        flag = false;
        for(int i=n-1; i>0; i--) {
            if(a[i] < a[i-1]) {
                int tmp = a[i];
                a[i] = a[i-1];
                a[i-1] = tmp;
                flag = true;
            }
        }
    }

    for(int i=0; i<n; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}