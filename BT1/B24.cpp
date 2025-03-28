#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main(){
	int n,x;
	scanf ("%d %d" , &n , &x);
	int a[n];
	for(int i = 0 ; i < n ; i++){
		scanf ("%d" , &a[i]);
	}
	int g = 0;
	for(int i = 0;i < n; i++){
		if(x == a[i]){
			g++;
		}
	}
	if(g == 0){
		printf ("khong co");
	}
	else printf ("%d" , g);
	
}
