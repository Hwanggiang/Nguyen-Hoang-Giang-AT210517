#include <stdio.h>
#include <math.h>


int main(){
	int nam , thang;
	scanf ("%d %d" , &nam , &thang);
	if(thang == 2){
		printf ("Thang 2 nam %d co 28 hoac 29 ngay\n" , nam);
		return 0;
	}
	else if(thang % 2 == 0 && thang <= 7){
		printf ("Thang %d nam %d co 30 ngay" , thang , nam);
		return 0;
	}
	else if(thang % 2 != 0 && thang <= 7){
		printf ("Thang %d nam %d co 31 ngay" , thang , nam);
		return 0;
	}
	else if(thang % 2 == 0 && thang > 7){
		printf ("Thang %d nam %d co 31 ngay" , thang , nam);
		return 0;
	}
	else if(thang % 2 != 0 && thang > 7){
		printf ("Thang %d nam %d co 30 ngay" , thang , nam);
	}
	
	
	
	
	
}

