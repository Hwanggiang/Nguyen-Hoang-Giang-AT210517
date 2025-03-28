#include <stdio.h>
#include <math.h>


int main(){
	float a, b, c, d, e, f;
	scanf ("%f %f %f %f %f %f" , &a, &b , &c , &d , &e , &f);
	float x , y;
	
	
	if(a == 0){
		
		y = 1.0*c/b;
		x = 1.0*(f-e*y)/d;
		printf ("nghiem cua he la cap :(%.2f ,%.2f)" ,x,y);
	}
	else if(b == 0){
		x = 1.0*c/a;
		y = 1.0*(f-d*x)/e;
		printf ("nghiem cua he la cap :(%.2f, %.2f)" ,x,y);
	}
	else{
		y = (1.0 * a * f -1.0 *  d * c) / (1.0 * a * e - 1.0 * b * d);

		x = 1.0 * ((c-1.0*b*y)/a); 
		printf ("nghiem cua he la cap :(%.2f,%.2f)" ,x,y);
	}
	
	
	
	
	
	
}





