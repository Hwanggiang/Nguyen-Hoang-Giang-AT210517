#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int chen(char c[] , int k , char lala){
	for(int i = strlen(c) ; i > k ; i--){
		c[i] = c[i-1];
	}
	c[k] = lala;
	c[strlen(c) + 1] = '\0';
	
}
void lat(char b[]){
	for(int i = 0 ; i < strlen(b)/2 ;i++){
		char tmp = b[i];
		b[i] = b[strlen(b) - i - 1];
		b[strlen(b) - i - 1] = tmp;
	}
	

}


int cmp(const void *a , const void *b){
	char *x = (char*)a;
	char *y = (char*)b;
	return strcmp(x,y);
}

int main(){
	
}

	











