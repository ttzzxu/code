const int  maxN = 10010;

void yoself(){
	int flag = 0, count = 0, N, M, a[maxN] = { 0 },result[maxN];
	scanf("%d %d", &N, &M);
	while (flag<N) {
		for (int i = 1; i <=N; i++){
			if (a[i] == 0){
				count++;
				if (count % M == 0){
					a[i] = 1;
					flag++;
					result[flag] = i;
					a[i] = 1;
					//printf("第%d次，第%d个a出列\n", flag, i);
				}
			}
		}
	}
	for (int i = 1; i < N; i++) {
		printf("%d ", result[i]);
	}
	printf("%d\n", result[N]);
}
