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
	scanf ("%d %d" , &n , &m);
	int a[n];
	int b[m];
	for(int i = 0 ; i < n ; i++){
		scanf ("%d" , &a[i]);
	}
	for(int i = 0 ; i < m ; i++){
		scanf ("%d" , &b[i]);
	}
	qsort(a,n,sizeof(int),cmp);
	qsort(b,m,sizeof(int),cmp);
	
	int c[m+n];
	int ok = 0 , haha = 0;
	int cc =0;
	while(ok < n && haha < m){
		if(a[ok] <= b[haha]){
			c[cc++] = a[ok++];
		}
		if(a[ok] > b[haha]){
			c[cc++] = b[haha++];
		}
	}
	while(ok < n){
		c[cc++] = a[ok++];
	}
	while(haha < m){
		c[cc++] = b[haha++];
	}
	for(int i = 0 ; i < m+n ; i++){
		printf ("%d " , c[i]);
	}
	
}
