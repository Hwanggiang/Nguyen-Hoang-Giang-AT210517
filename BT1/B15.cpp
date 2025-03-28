#include <stdio.h>
#include <math.h>
int ucln(int a ,int b){
	while(b != 0){
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}
int bcnn(int a, int b){
	int m = a*b;
	return m/ucln(a,b);
}

int main(){
	int n , m;
	scanf ("%d %d" , &n , &m);
	printf ("uoc chung lon nhat la : %d\n" , ucln(n,m));
	printf ("boi chung nho nhat la : %d " , bcnn(n,m));
}
