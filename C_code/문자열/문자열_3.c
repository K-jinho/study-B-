#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main(){
    char arr[100] = { 0 };

    scanf("%s",&arr);

    for(int i = 97;i<= 122;i++){ 
        int check = 0; 
        while(arr[check] != 0){
            if(arr[check] == (char)i){
                break;
            }
            check++;
        }

        if(arr[check] == (char)i){
            printf("%d ", check);
        }else{
            printf("-1 ");
        }
    }
    return 0;
}