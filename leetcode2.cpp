const int maxn = 100;
int jump(int nums[], int n) {
	if (n == 1) {
		return 0;
	}
	int steps[maxn][maxn];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			steps[i][j] = n - 1;
		}
	}
	for (int i = 0; i < n; i++) {
		steps[i][i] = 0;
	}
	for (int i = 0; i >= 1 - n; i--) {
		for (int j = 0; j < n + i; j++) {
			if (nums[j] + j >= j - i) {
				steps[j][j - i] = 1;
			}
			else {
				for (int k = 1; k <= nums[j]; k++) {
					steps[j][j - i] = min(steps[j][j - i], 1 + steps[j + k][j - i]);
				}
			}
		}
	}
	return steps[0][n - 1];
}


