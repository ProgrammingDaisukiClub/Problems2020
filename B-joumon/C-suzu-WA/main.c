#include <stdio.h>
int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int D, W, A;
		scanf("%d %d %d", &D, &W, &A);
		if(D == W * A){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
	return 0;
}