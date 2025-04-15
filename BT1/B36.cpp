#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	int a,b;
	printf ("Nhap gia tr a va b : ");
	scanf ("%d %d" , &a , &b);
	int *x = &a;
	int *y = &b;
	int tmp = *x;
	*x = *y;
	*y = tmp;
	printf ("A va B luc nay la : %d %d" , *x , *y);
	return 0;
	
	
}
