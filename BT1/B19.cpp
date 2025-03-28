#include <stdio.h>
#include <math.h>
int giaithua(int n){
	int ed = 1 ;
	for(int i = 1 ; i <= n ; i++){
		ed *= i;
	}
	return ed;
}

int main(){
	float a, exp;
	scanf ("%f %f" , &a , &exp);
	float ok = a ;
	int f = 1;
	int y = 1;
	for(int i = 3 ; i < 1000; i+=2){
		f *= giaithua(i);
		if(y % 2 != 0){
			ok -= 1.0/f; 
		}
		else{
			ok += 1.0/f;
		}
		if(abs(ok) <= exp){
			printf ("%.2f" , ok);
			return 0;
		}
		y++;
		
	}
	
	
	
	
	
	
}
