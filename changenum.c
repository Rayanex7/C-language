#include <stdio.h>
#include<math.h>
int main(){
/*
    int n ,no, nr = 0, r ;

    printf("Entrer n :");
    scanf("%d", &n);

    no = n;

    r  = n % 10;
    n  = n / 10;
    nr = nr * 10 + r;

    r  = n % 10;
    n  = n / 10;
    nr = nr * 10 + r;

    r  = n % 10;
    n  = n / 10;
    nr = nr * 10 + r;

    printf("%d ---- %d ",no,nr);
*/
    int n ,no, nr = 0, r ;

    printf("Entrer n :");
    scanf("%d", &n);

    no = n;

    do{
        r  = n % 10;
        n  = n / 10;
        nr = nr * 10 + r;
    }while(n != 0);

    printf("%d ---- %d \n",no,nr);

}
