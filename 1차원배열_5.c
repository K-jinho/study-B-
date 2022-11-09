#include <stdio.h>
#include <limits.h>
#pragma warning(disable:4996)

int main() {
    int student[30] = { 0,};
    int i,e;

    for(i=0;i<28;i++){
        scanf("%d",&e);
        student[e-1] = e;
    }

    for(i=0;i<30;i++){
        if(student[i] == 0){
            printf("%d\n",i+1);
        }
    }

    return 0;
}