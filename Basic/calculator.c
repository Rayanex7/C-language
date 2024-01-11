#include<stdio.h>
int main(){
float add, sous, div, mult, a ,b;
	printf("Entrer le premier nombre : ");
	scanf("%f", &a);
	printf("Entrer le deuxieme nombre : ");
        scanf("%f", &b);
	add = a + b;
	sous = a - b;
	div = a / b;
	mult = a * b;
	printf("%.2f + %.2f = %.2f\n", a, b, add);
	printf("%.2f - %.2f = %.2f\n", a, b, sous);
	printf("%.2f * %.2f = %.2f\n", a, b, mult);
	printf("%.2f / %.2f = %.2f\n", a, b, div);




	






return 0;
}
