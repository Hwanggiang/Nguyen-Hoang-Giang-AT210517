#include <stdio.h>
#include <math.h>
int nt(int a){
	for(int i = 2 ; i < sqrt(a) ; i++){
		if(a % i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n;
	scanf ("%d" , &n);
	if(nt(n) == 1){
		printf ("Yes");
	}else printf ("no");
	return 0;
}

