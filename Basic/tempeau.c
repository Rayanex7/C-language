#include<stdio.h>
int main(){
int a;  //a = temperature of water
	
printf("Enter the water temperature : ");
scanf("%d",&a);
	if(a<=0){
	printf("The water is frozen\n");
	}else if(a>0 , a<100){
	printf("The water is liquid\n");
	}else{
	printf("The water is vaporized\n");
	}

return 0;
}
