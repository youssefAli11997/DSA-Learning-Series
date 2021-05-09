#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int n,z,x, cnt = 0; cin>>n>>z;
        priority_queue<int> pq;

        for(int i=0; i<n; i++) {
            cin>>x;
            pq.push(x);
        }

        while(!pq.empty() && z > 0) {
            int top = pq.top();
            z -= top;
            pq.pop();
            top /= 2;
            if(top > 0) pq.push(top);
            cnt++;
        }
        
        if(z > 0) cout<<"Evacuate\n";
        else cout<<cnt<<endl;
    }

    return 0;
}