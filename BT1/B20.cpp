#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main(){
	int a[10];
	for(int i = 0 ; i < 10 ; i++){
		scanf ("%d" , &a[i]);
	}
	for(int i = 0 ;i < 10 ; i++){
		printf ("%d ", a[i]);
	}
	return 0;
}

