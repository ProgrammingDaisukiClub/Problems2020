#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	
	while(T--){
		int K;
		scanf("%d", &K);
		int A[K];
		for(int i = 0; i < K; i++) {
			scanf("%d", &A[i]);
		}
		int N;
		scanf("%d", &N);
		int B[N];
		for(int i = 0; i < N; i++) {
			scanf("%d", &B[i]);
			B[i]--;
		}

		int ok = 1;
		for(int i = 0; i < N; i++) {
			if(A[B[i]] == 0) {
				ok = 0;
				break;
			}
			A[B[i]]--;
		}
		if(ok == 1) printf("wa-i\n");
		else printf("e-n\n");
	}
	return 0;
}
