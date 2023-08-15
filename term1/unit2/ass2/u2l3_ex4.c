/*
 ============================================================================
 Name        : u2l3_ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main() {
	float a;
	printf("enter a number:") ;
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	if(a>0){
		printf("%f is positive",a);


	}
	else if(a<0){
		printf("%f is negative",a);



	}
	else{
		printf("you entereda zero");

	}


}
