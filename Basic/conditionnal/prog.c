#include<stdio.h>

/* This program is set to define if the two numbers are with same sign, if it is it will changethe content of A to B, but if the're not with the same sign it will enter the addition of A and B and put it in A and the multiplication of A and B in B */ 



int main(){
int a,b,c;
printf("Enter the first number : \nA :");
scanf("%d",&a);
printf("Enter the second number : \nB :");
scanf("%d",&b);
	if(a>0 && b>0){
		c = a;
		a = b;
		b = c;
	printf("A = %d and B= %d \n",a,b);	
	}else if(a<0 && b<0){
	        c = a;
                a = b;
                b = c;
        printf("A = %d and B= %d \n",a,b);
	}else{
	c = a + b;
	b = a * b;
	a = c;
	printf("A = %d and B = %d \n",a,b);
	}



return 0;
}

