#include<stdio.h>
int main(){
float notes, sum, moy, note1, note2, note3, note4, note5;
	printf("Entrer vos notes : \n");
	scanf("%f", &note1);
	scanf("%f", &note2);
	scanf("%f", &note3);
	scanf("%f", &note4);
	scanf("%f", &note5);
		sum = note1 + note2 + note3 + note4 + note5;
		moy = sum / 5;
	printf("Votre somme est : %.2f\nVotre moyenne est : %.2f\n", sum, moy);







return 0;
}
