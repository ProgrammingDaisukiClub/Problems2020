#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	
	while(T--){
		int N, K;
		scanf("%d %d", &N, &K);
		int sum = 0;
		while(N >= K) {
			sum += K;
			N -= K - 1;
		}
		sum += N;
		printf("%d\n", sum);
	}
	return 0;
}
