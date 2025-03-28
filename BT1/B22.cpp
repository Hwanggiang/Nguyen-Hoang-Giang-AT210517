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
	int tong = 0;
	int tongduong = 0;
	int tongam = 0;
	float tb = 0;
	float tbd = 0;
	float tba = 0;
	int duong = 0 , am = 0;
	for(int i = 0 ; i < n ; i++){
		tong += a[i];
		if(a[i] > 0){
			tongduong += a[i];
			duong++;
		}
		if(a[i] < 0){
			tongam += a[i];
			am++;
		}
	}
	tb = 1.0*tong/n;
	tbd = 1.0*tongduong/duong;
	tba = 1.0*tongam/am;
	printf ("Tong la : %d\n" , tong);
	printf ("Tong duong la : %d\n" , tongduong);
	printf ("Tong am la : %d\n" , tongam);
	printf ("Trung binh la : %.2f\n" , tb);
	printf ("Trung binh duong la : %.2f\n" , tbd);
	printf ("Trung binh am la : %.2f\n" , tba);
	
	
	
	
	
}
