#include <stdio.h>
#include <math.h>


int main(){
	int n;
	scanf ("%d", &n);
	int ok= 0 ;
	for(int i = 1 ; i <= sqrt(n) ; i++){
		if(n % i == 0){
			if(i == sqrt(n)){
				ok += i;
			}
			else{
			ok += i + n/i;
		}
		}
	}
	if(ok == n*2){
		printf ("yes");
		
	}
	else{
		printf ("no");
	}
	
	
	
	
	
}
