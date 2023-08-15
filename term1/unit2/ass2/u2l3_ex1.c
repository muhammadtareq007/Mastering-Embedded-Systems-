// Online C compiler to run C program online
/*
 ============================================================================
 Name        : u2l3_ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main() {
	int a;
	scanf("%d",&a);
	printf("enter integer you want to check :%d\r",a);
	if ((a%2==0)){
		printf("\n%d is even",a);
	}
	else {
		printf("%d is odd ",a);
	}
}


