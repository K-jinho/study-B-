#include <stdio.h>
#pragma warning(disable:4996)

int cal(int n){
    int a1,a2;
    int count = 0;
    
    while(n>0&&n<=1000){
        if(n<100){
            count++;
        }else if(n >= 100 && n < 1000){
            a1 = (n / 100) - (n / 10 % 10);
            a2 = (n / 10 % 10) - (n % 10);
            if(a1==a2) count++;
        }
        n--;
    }

    return count;
}

int main(){

    int N;
    scanf("%d",&N);
    printf("%d",cal(N));

    return 0;
}