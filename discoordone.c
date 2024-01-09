#include <stdio.h>
#include <math.h>
int main(){
int x1, x2, y1, y2, dis;
	printf("Entrer les coordonne X1 et X2 : ");
	scanf("%d %d", &x1, &x2);
	printf("Entrer les coordonne Y1 et Y2 : ");
        scanf("%d %d", &y1, &y2);
	dis = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
	printf("\nLa distance entre les coordones (%d,%d) et (%d,%d) est %d\n",x1, y1, x2, y2, dis);






return 0;
}
