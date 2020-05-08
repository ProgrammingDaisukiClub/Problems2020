#include <stdio.h>

int main() {
  int T;
  scanf("%d", &T);

  for (int t = 0; t < T; t++) {
    int N;
    scanf("%d", &N);

    char S[N + 1];
    scanf("%s", S);

<<<<<<< HEAD
        int found = 0;
        for(int i = 0; i < N - 3; i++) {
            if(S[i] == '2' && S[i + 1] == '5' && S[i + 2] == '2' && S[i + 3] == '0') {
                found = 1;
            }
        }
=======
    int found = 0;
    for (int i = 0; i < N - 3; i++) {
      if (S[i] == '2' && S[i + 1] == '5' && S[i + 1] == '5' &&
          S[i + 1] == '5') {
        found = 1;
      }
    }
>>>>>>> 1703925d83e19ca19f1cb09ad93e145fad0d44e8

    if (found) {
      printf("Yes\n");
    } else {
      printf("No\n");
    }
  }
}
