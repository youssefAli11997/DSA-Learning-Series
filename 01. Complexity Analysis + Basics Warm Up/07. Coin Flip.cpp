#include <bits/stdc++.h>

using namespace std;

int main() {
	int t; scanf("%d", &t);

	while(t--) {
		int g; scanf("%d", &g);

		while(g--) {
			// i = 1 -> all heads, i = 2 -> all tails (initially)
			// q = 1 -> guess heads, q = 2 -> guess tails
			int i,n,q; scanf("%d %d %d", &i, &n, &q);

			if(n % 2 == 0) printf("%d\n", n/2);
			else {
				if(i == q) printf("%d\n", n/2);
				else printf("%d\n", n/2 + 1);
			}
		}
	}

	return 0;
}