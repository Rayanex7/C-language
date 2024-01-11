#include <stdio.h>
#include <math.h>
int main(){
float a,b,m;
	printf("ENtrer le nombre : ");
	scanf("%f",&a);
	printf("ENtrer le diviseur : ");
        scanf("%f",&b);
	m = fmod(a, b);
	printf("\nLe reste est : %.2f\n",m);







return 0;
}
