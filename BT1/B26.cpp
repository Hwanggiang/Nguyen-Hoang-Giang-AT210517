#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int cmp(const void *t ,const void *u){
	int *x = (int*)t;
	int *y = (int*)u;
	return *x - *y;
}


int main(){
	int n;
	scanf ("%d" , &n);
	int a[n];
	
	for(int i = 0 ; i < n ; i++){
		scanf ("%d" , &a[i]);
	}
	
	qsort(a,n,sizeof(int),cmp);
	for(int i = 0 ; i < n ; i++){
		printf ("%d ", a[i]);
	}
	
	
	
	
	
}
