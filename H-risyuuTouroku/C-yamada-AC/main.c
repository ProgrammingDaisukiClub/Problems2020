#include <stdio.h>
#include <stdlib.h>

int compare_int(const void *a, const void *b) {
	return -( *(int*)a - *(int*)b );
}

int N, K, X;
int A[10];
int M;
int B[100010];

void rec(int i, int num, int sum) {
	if(i == N) {
		if(num != K) {
			return ;
		}
		B[M] = sum;
		M++;
		return ;
	}
	rec(i + 1, num + 1, sum + A[i]);
	rec(i + 1, num, sum);
}

int main(){
	int T;
	scanf("%d", &T);
	
	while(T--){
		scanf("%d %d %d", &N, &K, &X);
		for(int i = 0; i < N; i++) {
			scanf("%d", &A[i]);
		}

		M = 0;
		rec(0, 0, 0);

		qsort(B, M, sizeof(int), compare_int);
		printf("%d\n", B[X - 1]);
	}
	return 0;
}
