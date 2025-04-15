#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	int n;
	
	scanf ("%d" , &n);
	int a[n][n];
	
	int h1 = 0 , c1 = 0 , h = n , c = n , ok = 1;
	int haha = 0;
	
	while(haha != n*n){
		for(int i = c1 ; i < c ; i++){
			a[h1][i] = ok;
			haha++;
			ok++;
			
		}
		h1++;
		for(int i = h1 ; i < h ; i++){
			a[i][c-1] = ok;
			ok++;
			haha++;
		}
		c--;
		for(int i = c-1;i >= c1;i--){
			a[h-1][i] = ok;
			ok++;
			haha++;
		}
		h--;
		for(int i = h-1;i >= h1 ;i--){
			a[i][c1] = ok;
			ok++;
			haha++;
		}
		c1++;
		
	}

	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			printf ("%d " , a[i][j]);
		}
		printf ("\n");
	}
	
	
	
}
