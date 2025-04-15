#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	int k,m,n;
	scanf ("%d %d %d" , &k , &m , &n);
	int a[k][m];
	int b[m][n];
	int c[k][n];
	for(int i = 0 ; i < k ; i++){
		for(int j = 0 ; j < m ; j++){
			scanf ("%d" , &a[i][j]);
		}
	}
	
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			scanf ("%d" , &b[i][j]);
		}
	}
	
	for(int i = 0 ; i < k ; i++){
		for(int j = 0 ; j < n ; j++){
			c[i][j] = 0;
			for(int f = 0 ; f < m ; f++){
				c[i][j] += a[i][f] + b[f][j];
			}
			
			
		}
	}
	for(int i = 0 ; i < k ; i++){
		for(int j = 0 ; j < n ; j++){
			printf ("%d " , c[i][j]);
		}
		printf ("\n");
	}
	
}
