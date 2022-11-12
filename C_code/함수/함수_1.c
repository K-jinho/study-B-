#include <stdio.h>

long long sum(int *a, int n){
    long long total;
    for(int i=0;i<n;i++){
        total += a[i];
    }
    return total;
}


// char, short, int 는 %d로 출력, long은 %ld, long long은 %lld로 출력    -> 정수 자료형
// 부호 없는 정수형 : unsigned (%u,%lu,%llu로 출력)