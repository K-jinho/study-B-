#include <stdio.h>


int sum(int n){
    int sum_n = n;

    while(n>0){                 //생성자가 아닌 수를 찾아주는 함수
        sum_n += sum_n %10;     //계산을 해서 나올 수가없는 수면 셀프넘버 
        n /= 10;                //ex) 20=셀프넘버, 아래수 더해도 안나옴
    }                           //뒷자리더하고 앞자리 더하는 방식 sum_n을 반환해서 인덱스에 저장 그 번호는 생성자가 있는거다.

    return sum_n;

}
int main(void){
    int arr[10001],ch;

    for(int i=1;i<10001;i++){
        ch = sum(i);
        if(ch < 10001){
            arr[ch] = 1;
        }
    }

    for(int i=1;i<10001;i++){
        if(arr[i] != 1){
            printf("%d\n",i);
        }
    }
    return 0;
}