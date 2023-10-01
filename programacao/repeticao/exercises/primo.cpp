#include <stdio.h>
#include <locale.h>
#include <math.h>
#define V 1
#define F 0

int main() {
	int N, i, primo;
	setlocale(LC_ALL, "Portuguese");
	printf("Entre com um inteiro: ");
	scanf("%d", &N);
	N=fabs(N);
	if (N<=1) {
		primo = F;
	}
	else {
		i=N-1;
		primo = V;
		while (i>1 && primo == V) {
			if (N % i == 0) primo = F;
			i--;
		}
	}
    if (primo==V) 
		printf("%d e primo\n", N);
    else 	
		printf("%d nao e primo\n", N);
	return 0;	
}
