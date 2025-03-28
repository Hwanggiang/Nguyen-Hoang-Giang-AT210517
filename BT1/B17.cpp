#include <stdio.h>
#include <math.h>


int main(){
	int n;
	scanf ("%d" , &n);
	float ok = 0;
	for(int i = 1 ; i <= n ; i++){
		ok += 1.0 * float(1.0/i);
	}
	printf ("%.2f" , ok);
}
