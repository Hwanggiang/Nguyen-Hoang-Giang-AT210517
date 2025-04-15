#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	int m,n;
	scanf ("%d %d" , &m,&n);
	int a[m][n];
	int b[m][n];
	int c[m][n];
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			scanf ("%d" , &a[i][j]);
		}
	}
	
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			scanf ("%d" , &b[i][j]);
		}
	}
	for(int i = 0 ; i < m ;i++){
		for(int j = 0 ; j < n ; j++){
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	
	for(int i = 0 ; i < m ;i++){
		for(int j = 0 ; j < n ; j++){
			printf ("%d " , c[i][j]);
		}
		printf ("\n");
	}
	
	
	
	
	
	
}
