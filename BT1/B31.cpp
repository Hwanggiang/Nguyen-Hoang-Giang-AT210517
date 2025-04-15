#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	int n;
	scanf ("%d" , &n);
	int ok = n;
	int a[32]; // mang in ra so du oi phep chia 2
	int b[32];// mang in ra so du moi phep chia 8
	int c[32]; // mang in ra so du moi phep chia 16
	for(int i = 0 ; i < 33 ; i++){
		a[i] = 99;
		b[i] = 99;
		c[i] = 99;
	}
	int f = 0;
	while(ok != 0){
		int g = ok % 2;
		ok /= 2;
		a[f] = g;
		f++;
}
f = 0;
ok = n;
while(ok != 0){
		int g = ok % 8;
		ok /= 8;
		b[f] = g;
		f++;
}
f = 0;
ok = n;

while(ok != 0){
		int g = ok % 16;
		ok /= 16;
		c[f] = g;
		f++;
}

	printf ("chuyen sang he so 2 la : ");
	for(int i = 31 ; i >= 0 ;i--){
		if(a[i] != 99){
			printf ("%d",a[i]);
		}
	}
	printf ("\n");
	printf ("chuyen sang he so 8 la : ");
	for(int i = 31 ; i >= 0 ;i--){
		if(b[i] != 99){
			printf ("%d",b[i]);
		}
	}
	printf ("\n");
	
	printf ("chuyen sang he so 16 la : ");
	for(int i = 31 ; i >= 0 ;i--){
		if(c[i] != 99){
			
			if(c[i] >= 10){
				printf ("%c" , c[i]-10+'A');
			}
			else{
			
			printf ("%d",c[i]);
		}
			
		}
	}
	
	

}







