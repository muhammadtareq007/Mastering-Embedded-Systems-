/*
 ============================================================================
 Name        : u2l3_ex6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main() {
	int i ;
	int sum =0 ;
	int p;
	printf("enter an intiger:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&p);
for(i=1;i<=p;i++){
	sum+=i;
}
printf("sum=%d",sum);
}
