#include<stdio.h>
int main(){
int age;
	printf("Enter the child age please :");
	
	scanf("%d" ,&age);
	
	if( 6 >= age && age <=7 ){
		
		printf("The child is in poussin age\n");
	
	}else if( 8 >=  age && age <=9 ){
		
		printf("The child is in pupille age\n");
	
	}else if( 10 >= age && age <=11 ){
		
		printf("The child is in minime age\n");
	
	}else{
		printf("The child is in cadet age\n");
	}

return 0;
}
