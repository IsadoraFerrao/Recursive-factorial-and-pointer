#include <stdio.h>
void somasub (int a, int b, int *p, int *q){
	*p = a+b;
	*q= a-b;
	
}

int main(void){
	int x, z;
	somasub(6,2,&x,&z);
	printf("Soma =%d e Subtracao =%d\n", x, z);
}
