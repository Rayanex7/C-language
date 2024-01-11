#include<stdio.h>
int main(){

	
	while (1) {
		long a;
		float b;
/*a = number of photocopies
	      b = price with Dirhams
	    */
printf("Enter the number of photocopies effectued : ");
	

	if(scanf("%ld", &a) !=1){
		printf("Exiting program invalid number\n");
	break;
	}




	if (a<=10)
	{
		b = 0.30 * a;

		printf("Your facture sir is : %.2fDHS\n",b);

	} else if(a>10 && a<=20){
		
		b = 0.25 * a;
		
		printf("Your facture sir is : %.2fDHS\n",b);
	
	} else {
		
		b = 0.20 * a;
		
	
	}
		
		printf("Your facture sir is : %.2fDHS\n",b);
	




	
	
	}
	return 0;
}
