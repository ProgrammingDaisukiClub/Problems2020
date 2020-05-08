#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	
	while(T--){
		int N;
		int sum = 0;
		scanf("%d", &N);
		for(int i = 0; i < N; i++) {
			int a;
			scanf("%d", &a);
			sum += a;
		}
		printf("%d\n", sum);
	}
	return 0;
}
