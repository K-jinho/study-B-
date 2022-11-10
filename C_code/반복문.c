#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int A,B;
	
	while (scanf("%d %d", &A, &B) != EOF)
		printf("%d\n", A + B);
	return 0;
}

// EOF(End Of File) : 파일에 끝에 도달했을 때 -1이라는 값을 반환