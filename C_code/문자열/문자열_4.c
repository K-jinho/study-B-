#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
    char S[20];
    int R, T;

    scanf("%d", &T);

    for (int k = 0;k < T;k++) {
        scanf("%d %s", &R, &S);

        for (int i = 0;i < strlen(S);i++) {
            for (int j = 0;j < R;j++) {
                printf("%c", S[i]);
            }
        }
        printf("\n");
    }

    return 0;
}