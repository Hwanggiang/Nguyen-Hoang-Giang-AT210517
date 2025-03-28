#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main(){
	int n;
	scanf ("%d" , &n);
	int a[n];
	for(int i = 0 ; i < n ; i++){
		scanf ("%d" , &a[i]);
	}
	
	int max = -99999;
	int ok = 0;
	int min = 99999;
	int haha = 0;
	for(int i = 0 ; i < n ; i++){
		if(max < a[i]){
			max = a[i];
			ok = i;
		}
		if(min > a[i]){
			min = a[i];
			haha = i;
		}
	}
	printf ("So lon nhat va vi tri cua no lan luot la : %d %d\n" , max , ok+1);
	printf ("So nho nhat va vi tri cua no lan luot la : %d %d" , min , haha+1);
	
	
	
	
}
