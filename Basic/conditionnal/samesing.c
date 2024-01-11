#include<stdio.h>
int main(){
int a,b;
	printf("Enter first number : \n");
	scanf("%d",&a);
	printf("Enter second number : \n");
	scanf("%d",&b);
	if(a>0 &&b>0){
	printf("The two numbers are positive\n");
		}else if(a<0 && b<0){
		printf("The two numbers are negative\n");
		}else if(a==0 && b==0){
		printf("The numbers are both null\n");
	}else{
	printf("The two numbers aren't the same sign\n");
	}








return 0;
}
