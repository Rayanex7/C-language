#include<stdio.h>
int main(){
int a; 
printf("Enter a number between 1 and 7 : \n");
scanf("%d",&a);	
	switch(a){
		case 1 :	printf("Monday\n");
				break;
		case 2 :        printf("Tuesday\n");
                                break;
		case 3 :        printf("Wednesday\n");
                                break;
		case 4 :        printf("Thursday\n");
                                break;
		case 5 :        printf("friday\n");
                                break;
		case 6 :        printf("saturday\n");
                                break;
		case 7 :        printf("Sunday\n");
                                break;
		default : printf("\nEnter number between 1 and 7 Please \n");
	}









return 0;
}
