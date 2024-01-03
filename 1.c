#include <stdio.h>

int main() {
    int n;

    	printf("Entrer nombre des notes : \n");   
    	scanf("%d",&n);
    
    int notes[n];
    
    int i;
    for (i=0 ; i<n ; i++){
    	 printf("\nEntrer note %d :",(i+1));
    	 scanf("%d",&notes[i]);
     
    }
    
    	 printf ("\nLa liste des notes :\n");
     for(i=0 ; i<n ; i++){
         printf("\n - note %d = %d \n",(i+1),notes[i]);
     }
    /*    
     }
     int index,newVal;
     	printf("\nIndex Note a modifie :\n");
     	scanf("%d",&index);
     
     	printf("\nEntrer Nouvelle valeur :\n");
     	scanf("%d",&newVal);
     
     		notes[index] = newVal;
     	printf("\nLa liste des notes :\n");
     
     for(i=0 ; i<n ; i++){
         printf("\n - note %d = %d \n",(i+1),notes[i]);
     }
     		for(i=0 ; i<n ; i++){
     			if(notes[i] % 2 == 0){
	     			printf("C'est un nombre paire :");
     			}else{
	     			printf("\nc'est un nombre impaire\n");
     				}
     
		for(i=0 ; i<n ; i++){
			notes[i]++;
		}
		}
    
*/	
		int c;
		printf("Entrer la valeur a rechercher\n");
		scanf("%d", &c);
		for(i=1 ; i<n ; i++){
			if(c=notes[i]){
			printf("exist\n");
			}else{
			printf("n'existe pas\n");
			}
		}














    return 0;
     }
	
	
		
	
	

	
