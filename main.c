#include <stdio.h>

int compare(int a, int b){
	if(a>b) return 1;
	else return 0;
}

void nothing(void){
}

int find(int n, int* p){
	int* checker = p;
	int i = 0;
	while(*checker != EOF){
		if((*checker) == n) return i;
		checker++; i++;
	}
}

int main(void){
	printf("hello world\n");
	return 0;
}

