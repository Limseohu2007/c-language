#include<stdio.h>

int main() {
	
	int a = 3; //변수선언 및 초기화
	a = a + 6;
	
	if(a > 5) {
		a = a-3;
		printf("%d\n", a);
	}else {
		printf("%d\n", a-2);
	}
    return 0;	
}