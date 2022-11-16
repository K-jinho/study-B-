#include <stdio.h>
#pragma warning(disable:4996)

int main(){
    int a,b;
    int a1,b1;

    scanf("%d %d",&a,&b);

    a1 = a/100 + (a/10%10)*10 + (a%10*100);
    b1 = b/100 + ((b/10%10)*10) + (b%10*100);

    if (a1 > b1) printf("%d",a1);
    else if(a1 < b1) printf("%d",b1);
    else return 0;
}