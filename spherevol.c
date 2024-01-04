#include<stdio.h>
#include<math.h>
int main(){
float r, vol; 
const float pi=3.14;
	printf("Entrer le rayon du sphere: ");
	scanf("%f",&r);
	vol = (4*pi*pow(r,3))/3;
	printf("\nLe volume de ce sphere est : %f \n", vol);








return 0;
}
