#include <iostream>

using namespace std;

int main() {
    int n, b, open = 0, max_depth = 0, max_depth_i, seq_start, max_seq = 0, max_seq_i;
    cin>>n;

    for(int i=1; i<=n; i++) {
        cin>>b;
        if(b == 1) open++;
        else open--;

        if(b == 1 && open == 1) seq_start = i;
        if(open == 0) {
            int seq_length = i - seq_start + 1;
            if(seq_length > max_seq) {
                max_seq = seq_length;
                max_seq_i = seq_start;
            }
        } 

        if(open > max_depth) {
            max_depth_i = i;
            max_depth = open;
        }
    }

    cout<<max_depth<<" "<<max_depth_i<<" "<<max_seq<<" "<<max_seq_i<<endl;

    return 0;
}