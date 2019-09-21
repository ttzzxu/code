void oj2(int arr[],int N) {
		int sum1, sum2;
		int i;
		for (i = 1, sum1 = 0; i < N; sum1 += i, i++);
		for (i = 0, sum2 = 0; i < N; sum2 += arr[i], i++);
		printf("%d\n", sum2 - sum1);
}
