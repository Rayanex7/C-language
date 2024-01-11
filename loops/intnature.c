#include <stdio.h>
int main(){
int a;
	printf("Entrer votre nombre : ");
	scanf("%d",&a);
	if(a>0){
	printf("Le nombre %d est positif\n",a);
	}else if(a<0){
	printf("Le nombre %d est negatif\n",a);
	}else if(a==a){
	printf("Ce nombre est null\n");
	}else{
	printf("Veuillez entrer un nombre");
	}




return 0;
}
