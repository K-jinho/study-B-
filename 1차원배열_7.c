#include <stdio.h>
#include <limits.h>
#pragma warning(disable:4996)

int main(){
    int line;
    int max=0;
    float avg;

    scanf("%d",&line);

    float subject[line];

    for(int i=0;i<line;i++){
        scanf("%f",&subject[i]);
        if(subject[i] > max){
            max = subject[i];
        }
    }

    for(int i=0;i<line;i++){
        avg += subject[i]/max*100;
    }

    printf("%f",avg / line);

    return 0;
}

//변수 double : lf, float : f 
//계산할 때 float배열값과 그냥 배열값은 결과값이 다름 맞춰줘야함