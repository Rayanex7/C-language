#include<stdio.h>
int main(){
int a; //personnage position 
	
printf("Enter a number for moving personnage : \n");
scanf("%d",&a);

	switch(a){
		case 2 : printf("The personnage goes down \n");
		break;
		case 4 : printf("The personnage goes to the left \n");
                break;
		case 6 : printf("The personnage goes to the right \n");
                break;
		case 8 : printf("The personnage goes up \n");
                break;
		default : printf("Error, the personnage does not moving\n");
	 	break;
	
	
	}



return 0;
}
