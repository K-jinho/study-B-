#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main(){
    char a[1000000];  
    int arr[26];
    int max=0;
    int size;
    char ans;

    scanf("%s",a);
    size = strlen(a);

    for(int i=0;i<size;i++){
        if(a[i] >= 'a') arr[a[i]-'a']++;
        else arr[a[i] - 'A']++;
    }

    for(int i=0;i<26;i++){
        if(arr[i] == max){
            ans = '?';
        }
        else if(arr[i] > max){
            max = arr[i];
            ans = i + 'A';
        }
    }

    printf("%c\n",ans);

    return 0;
}


 