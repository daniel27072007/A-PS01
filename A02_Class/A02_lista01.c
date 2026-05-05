#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main() {
	 
	int i, j;
	 
	for(int i = 0; i < 5; i +=1){
		for(int j = 0; j < 5; j +=1){
			if(i == j){
				printf("X");
			}
			else{
			printf("()", i, j);	
			}
		}
		printf("\n");
	}
	
	return 0;
}