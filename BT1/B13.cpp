#include <stdio.h>
#include <math.h>


int main(){
	int ok = 0;
	for(int i = 0 ; i < 100 ; i++){
		if(i % 2 != 0){
			ok += i;
		}
	}
	printf ("%d",ok);
}

