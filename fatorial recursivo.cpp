#include <stdio.h>
int fatorial (int n);
int main(){
	int fat, n;
	printf("Digite numero para o fatorial: ");
	scanf("%d", &n);
	fat=fatorial(n);
	printf("Fatorial: %d", fat);
	return 0;
}

int fatorial (int n){
	if (n==0 || n==1)
		return 1;
	else
		return n*(fatorial(n-1));
}
