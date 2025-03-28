#include <stdio.h>
#include <math.h>


int main(){
	int n;
	scanf ("%d" , &n);
	if(n == 0){
		printf ("0");
		return 0;
	}
	if(n == 1){
		printf ("1");
		return 0;
	}
	else {
		int a[100];
		a[0] = 0;
		a[1] = 1;
		for(int i = 2 ; i < 100 ; i++){
			a[i] = a[i-1] + a[i-2];
			if(n-1 == i){
				printf ("%d " , a[i]);
			}
		}
	}
	
	
	
}
