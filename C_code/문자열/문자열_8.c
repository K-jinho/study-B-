#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main(){
    char arr[15];
    int size;
    int count = 0;

    scanf("%s",arr);
    size = strlen(arr);

    for(int i=0;i<size;i++){
        if(arr[i] == 'A'|| arr[i] == 'B' || arr[i] == 'C'){
            count += 3;
        }else if (arr[i] == 'D'|| arr[i] == 'E' || arr[i] == 'F'){
            count += 4;
        }else if (arr[i] == 'G'|| arr[i] == 'H' || arr[i] == 'I'){
            count += 5;
        }else if (arr[i] == 'J'|| arr[i] == 'K' || arr[i] == 'L'){
            count += 6;
        }else if (arr[i] == 'M'|| arr[i] == 'N' || arr[i] == 'O'){
            count += 7;
        }else if (arr[i] == 'P'|| arr[i] == 'Q' || arr[i] == 'R' || arr[i] == 'S'){
            count += 8;
        }else if (arr[i] == 'T'|| arr[i] == 'U' || arr[i] == 'V'){
            count += 9;
        }else if (arr[i] == 'W'|| arr[i] == 'X' || arr[i] == 'Y' || arr[i] == 'Z'){
            count += 10;
        }
    }

    printf("%d",count);

    return 0;
}