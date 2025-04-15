#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int ham(int a , int b){
	if(b == 0){
		return 1;
	}
	else if(b > 0){
		return a * ham(a,b-1);
	}
}

int main(){
	int x ,y;
	scanf ("%d %d" , &x , &y);
	
	printf ("%d" , ham(x,y));
}
