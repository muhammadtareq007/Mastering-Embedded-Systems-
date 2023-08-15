/*
 ============================================================================
 Name        : u2l3_ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main() {
	float a,b,c;
	printf("enter three numbers :");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f",&a,&b,&c);
	if(a>b&&a>c) {

	printf("largest number = %f",a);
		}
	if(b>a&&b>c) {

		printf("largest number = %f",b);
	}
	if(c>a&&c>b) {
		printf("largest number = %f",c);}
	}



