/*
 ============================================================================
 Name        : u2l3_ex5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main() {
	char alphabet ;
	printf("enter a character :");
	fflush(stdin);fflush(stdout);
	scanf("%c",&alphabet);
	if((alphabet=='a'&&'z')||(alphabet=='A'&&'Z')){
	printf("%c is an alphabet",alphabet);
	}
	else {
		printf("%c is not an alphabet",alphabet);

	}
}
