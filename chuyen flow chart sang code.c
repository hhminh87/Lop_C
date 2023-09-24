#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=2,b=3,c=4,d=5,e=6,f=7, x,y;
	//x=a^6+b*c*d+ef
	//y=a*b +c^2*d+e*f
	//in ra x,y
	x = pow(a,6) + b*c*d +e*f;
	y = a*b+ pow(c,2) +e*f;
	printf("\n x= %d", x);
	printf("\n x= %d", y);
	
	
	
	return 0;
}
