#include <stdio.h>
#include <math.h>


int main(){
	float a , b, c;
	scanf ("%f %f %f" , &a , &b , &c);
	if(a + b <= c || c + b <= a || a + c <= b){
		printf ("Khong tao thanh 1 tam giac");
		return 0;
	}
	else{
		if(a == b && b == c){
		printf ("Tam giac deu\n");
		
		}
		
	else if(a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b){
		printf ("tam giac vuong\n");
	}
	else if(a == b || b == c || a == c){
		printf ("tam giac can\n");
	}
	else if(a*a + b*b == c*c && a == b || b*b + c*c == a*a && b == c|| a*a + c*c == b*b && a == c){
		printf ("Tam giac vuong can\n");
	}
	else {
		printf ("tam giac thuong\n");
	}
	
	
}

float chuvi = a + b + c;
float ok = chuvi/2;
float dientich = sqrt(ok*(ok-a)*(ok-b)*(ok-c));
printf ("%2.f\n%2.f" , chuvi , dientich);
	
	
}

