#include <iostream>
#include <map>

using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int n; cin>>n;
        int a[n];
        map<int,int> eles;
        for(int i=0; i<n; i++) {
            cin>>a[i];
            eles[a[i]]++;
        }
        
        map<int, int>::iterator it = eles.begin();
        while (it != eles.end()) {
            if(it->second == 1) {
                for(int i=0; i<n; i++) {
                    if(a[i] == it->first)
                        cout<<i+1<<endl;
                }
                break;
            }
            
            it++;
        }
    }

    return 0;
}