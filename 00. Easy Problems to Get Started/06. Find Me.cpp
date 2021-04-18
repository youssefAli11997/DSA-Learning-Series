#include <iostream>

using namespace std;

int main() {
    int n,k; cin>>n>>k;
    bool found = false;

    for(int i=0; i<n; i++) {
        int x; cin>>x;

        if(x == k)
            found = true;
    }

    if(found) cout<<1<<endl;
    else cout<<-1<<endl;

    return 0;
}