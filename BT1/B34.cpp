#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	int m , n , p;
	scanf ("%d %d %d" , &m , &n , &p);
	int a[m][n];
	int b[n][p];
	int c[m][p];
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n; j++){
			scanf ("%d" , &a[i][j]);
		}
	}
	
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < p; j++){
			scanf ("%d" , &b[i][j]);
		}
	}
	
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < p; j++){
			c[i][j] = 0;
		}
	}
	
	
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < p; j++){
			for(int ok = 0 ; ok < n ;ok++){
				c[i][j] += a[i][ok] * b[ok][j]; 
			}
		}
	}
	
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < p; j++){
			printf ("%d " , c[i][j]);
		}
		printf ("\n");
	}
	
}
