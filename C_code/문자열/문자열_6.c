#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
    char word[1000000] = { 0 };
    int count = 0,len;

    scanf("%[^\n]", word);
    len = strlen(word);

    if (len == 1 && word[0] == ' ') {
        printf("0\n");
        return 0;
    }

    for (int i = 1; i < len - 1; i++) {
        if (word[i] == ' ') {
            count++;
        }
    }

    printf("%d", count+1);

    return 0;
}

//["%^\n"]은 엔터가 나올때까지 문자열로 받는다.