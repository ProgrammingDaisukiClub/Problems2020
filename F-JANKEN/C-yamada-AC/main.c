#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	
	while(T--){
		int N;
		scanf("%d", &N);
		int A[N], B[N];
		for(int i = 0; i < N; i++) {
			scanf("%d", &A[i]);
		}
		for(int i = 0; i < N; i++) {
			scanf("%d", &B[i]);
		}

		int a = 0, b = 0, c = 0;
		for(int i = 0; i < N; i++) {
			int win = (A[i] + 1) % 3;
			int lose = (A[i] + 2) % 3;
			if(B[i] == win) {
				a++;
			} else if(B[i] == lose) {
				b++;
			} else {
				c++;
			}
		}
		printf("%d %d %d\n", a, b, c);
	}
	return 0;
}
