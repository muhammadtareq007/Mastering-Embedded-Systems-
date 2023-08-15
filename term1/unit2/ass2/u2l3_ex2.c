/*
 ============================================================================
 Name        : u2l3_ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main() {
	char alphabet;
	printf("enter an alphabet:\r", alphabet);
	fflush(stdin);fflush(stdout);
	scanf("%c", &alphabet);
	if(( alphabet=='a')||( alphabet=='e')||( alphabet=='i')||( alphabet=='o')||( alphabet=='u')||
	( alphabet=='A')||( alphabet=='E')||( alphabet=='I')||( alphabet=='O')||( alphabet=='U')){
		printf("\n%c is a vowel",alphabet);}
	else{
		printf("\n%c is constant",alphabet);
	}

}
