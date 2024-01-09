#include <stdio.h>
int main(){
int heurs, min, sec, Tsec;  	/*Tsec = Temps en seconds*/
	printf("Entrer Le temp en seconde : ");
	scanf("%d", &Tsec);
		heurs = Tsec / 3600;
		min = (Tsec % 3600) / 60;
		sec = (Tsec % 3600) % 60;
	printf("L'heure est %dh%dm%ds\n", heurs, min, sec);	




return 0;
}
