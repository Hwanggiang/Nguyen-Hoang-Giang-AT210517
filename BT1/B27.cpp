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
	int n,m;
	scanf ("%d %d" , &n,&m);
	int a[n];
	int b[m];
	for(int i = 0 ; i < n ; i++){
		scanf ("%d" , &a[i]);
	}
	for(int i = 0 ; i < m ; i++){
		scanf ("%d" , &b[i]);
	}
	qsort(a,n,sizeof(int) , cmp);
	qsort(b,m,sizeof(int) , cmp);
	int c[n+m];
	int h = 0 , k = 0,ok = 0;
	while(h < n && k < m){
		if(a[h] <= b[k]){
			c[ok++] = a[h++];
		}
		else{
			c[ok++] = b[k++];
		}
	}
	while(h < n){
		c[ok++] = a[h++];
	}
	while(k < m){
		c[ok++] = b[k++];
	}
	for(int i = 0 ; i < ok;i++){
		printf ("%d " , c[i]);
	}
}
