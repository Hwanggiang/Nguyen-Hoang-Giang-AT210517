#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int sofibo(int m){
	if(m <= 1){
		return m;
	}
	else{
		return sofibo(m-1) + sofibo(m-2);
	}
}

int main(){
	int n;
	scanf ("%d" , &n);
	n--;
	printf ("%d" , sofibo(n));
	
	
	
}
