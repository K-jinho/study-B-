#include <stdio.h>
#include <limits.h>
#pragma warning(disable:4996)

int main() {
    int array[10];
    int i,e,c=0;

    for(i=0;i<10;i++){
        scanf("%d",&array[i]);
        array[i] = array[i] % 42;
    }

    for(i=0;i<10;i++){
        e = 0;
        for(int j=i+1; j<10;j++){
            if(array[i] == array[j]){
                e++;
            }
        }
        if(e == 0){
            c++;
        }
    }

    printf("%d\n",c);
   
    return 0;
} 