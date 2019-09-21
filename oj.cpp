//
// Created by Blank on 2019/9/21.
//

#include<cstdio>
using namespace std;




const int maxn = 1010;
void func_1() {
	int n, k,chance=1,T,h[maxn];
	scanf("%d", &T);
	for (int k = 0; k < T; k++) {
		chance = 1;
		scanf("%d %d", &n,&k);
		for (int i = 0; i < n; i++) {
			scanf("%d", &h[i]);
		}
		int j;
		for (j = 0; j < n;) {
			int max_small=-1;
			int i;
			for (i = j+1; (i <= j + k)&&(i<n); i++) {
				if (h[i] <= h[j]) {
					if (max_small == -1) {
						max_small = i;
					}
					else if (h[i] >= h[max_small]) {
						max_small = i;
					}
				}
			}

			if (max_small != -1) {
				j = max_small;
			}
			else if (chance == 1) {
				max_small = i;
				for (int m=i+1; (m <= i + k) && (m < n); m++) {
					if (h[m] >= h[max_small]) {
						max_small = m;
					}
				}
				j = max_small;
				chance--;


			}else{
				j=n+1;
			}

		}
		if((j+k)>=n-1 && (j <= n) &&h[n - 1] <= h[j-1])
			printf("YES\n");
		else
			printf("NO\n");
	}
}

int main() {
	func_1();
	return 0;
}
