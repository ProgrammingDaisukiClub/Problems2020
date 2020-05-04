#include <stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int d, w, a;
		scanf("%d %d %d", &d, &w, &a);
		if(d/(w*a)==1){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
	return 0;
}