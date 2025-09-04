#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Stack overflow
void stack_overflow(int count){
	printf("Stack overflow: %d\n",count);
	stack_overflow(count+1);
}

//Out of memory (OOM)
void out_of_memory (){
	while(1){
		int *MEM = (int*) malloc(sizeof(int)*10000000);
	       	if (MEM == NULL){
			printf("Out of memory\n");
			exit(1);
		}
	}
}

//Memory leak
void memory_leak(){
	int *MEM = (int*) malloc(sizeof(int)*1000);
	printf("Do not have free(MEM)");
}


int main(void){
	printf("./memory_lab stack_overflow\n");
	printf("./memory_lab out_of_memory\n");
	printf("./memory_lab memory_leak\n");
	printf("X to exit\n");
	printf("Nhap lua chon(1,2,3):\n");

	char option;
	int count = 0 ;
	scanf(" %c",&option);

	if (option == 'X' || option == 'x'){
		printf("End.");
	} else 
	if (option == '1'){
		printf("Demo stack overflow");
		stack_overflow(count);
	} else
	if (option == '2'){
		printf("Demo out of memory");
		out_of_memory();
	} else 
	if (option == '3'){
		printf("Demo memory leak");
		memory_leak();
	}
	return 0;
}
