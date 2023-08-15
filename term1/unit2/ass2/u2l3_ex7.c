/*
 ============================================================================
 Name        : u2l3_ex7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main() {
	int i ;
	int f ;
	int factorial=1;
	printf("enter a number :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&f);
	if(f>0){
		for(i=1;i<=f;i++){
			factorial*=i;

		}
		printf("factorial=%d",factorial);
	}
	else{
		printf("error!!factorial of negative number doesnot exist ");
	}

}
