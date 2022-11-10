#include <stdio.h>
#pragma warning(disable:4996)

int main(){

    int c,n;
    int score[100];
    int sum,count;
    double avg;

    scanf("%d",&c);
    for(int i=0;i<c;i++){
        sum = 0;
        avg = 0.00;
        count = 0;

        scanf("%d",&n);

        for(int j=0;j<n;j++){
            scanf("%d", &score[j]);
            sum += score[j];
        }

        avg = (double)sum / n;

        for(int j=0;j<n;j++){
            if(avg < score[j]){
                count++;
            }
        }

        printf("%.3lf%%\n",(double)count * 100 / n);
    }

    return 0;

}