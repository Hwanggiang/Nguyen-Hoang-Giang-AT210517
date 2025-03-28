#include<stdio.h>
#include<math.h>


int main(){
	float n;
	scanf ("%f" , &n);
	float k = n*n;
	float g = n*n*n;
	float dt = 4.0*3.14*k;
	float tt = (4.0/3.0)*3.14*g;
	
	printf ("dien tich hinh cau : %2.f\n" ,  dt);
	printf ("The tich hinh cau : %2.f" , tt);
	
}
