#include <iostream>

using namespace std;

void printNextFive(int start) {
    if(start % 2 == 1) {
        for(int i=0; i<5; i++) cout<<start+i<<" ";
    }
    else {
        for(int i=4; i>=0; i--) cout<<start+i<<" ";
    }
    cout<<endl;
}

int main() {
    int n, current = 1; cin>>n;

    for(int i=0; i<n; i++) {
        printNextFive(current);
        current += 5;
    }

    return 0;
}