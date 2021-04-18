#include <cstdio>

using namespace std;

int main() {
    int t; scanf("%d", &t);

    while(t--) {
        int n, cnt = 1, prev, x; scanf("%d", &n);
        for(int i=0; i<n; i++) {
            scanf("%d", &x);
            if(i == 0) prev = x;
            else if(prev >= x){
                prev = x;
                cnt++;
            }
        }

        printf("%d\n", cnt);
    }

    return 0;
}