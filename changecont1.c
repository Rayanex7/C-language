#include <stdio.h>
int main(){
int A,B;
	printf("Entrer la valeur de A : ");
	scanf("%d", &A);
	printf("Entrer la valeur de B : ");
        scanf("%d", &B);
	A = A + B;
	B = A - B;
	A = A - B;
	printf("La valeur de A : %d\nLa valeur de B : %d\n", A,B);









return 0;
}
