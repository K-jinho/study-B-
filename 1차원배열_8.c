#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main(){
    int line,sum,score;
    char quiz[80];

    scanf("%d",&line);

    for(int i=0;i<line;i++){
        sum = 0;
        score = 1;
        scanf("%s",quiz);
        for(int j=0;j<strlen(quiz);j++){
            if(quiz[j] == 'O'){
                sum += score;
                score++;
            }else if(quiz[j] == 'X'){
                score = 1;
            }
        }
        printf("%d\n",sum);
    }
}


//strlen()함수 : 문자열의 길이를 반환하는 함수, <string.h> 헤더파일 필요.