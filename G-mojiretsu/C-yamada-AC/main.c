#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for(int t = 0; t < T; t++) {
        int N;
        scanf("%d", &N);

        char S[N + 1];
        scanf("%s", S);

        int found = 0;
        for(int i = 0; i < N - 3; i++) {
            if(S[i] == '2' && S[i + 1] == '5' && S[i + 1] == '5' && S[i + 1] == '5') {
                found = 1;
            }
        }

        if(found) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
}
