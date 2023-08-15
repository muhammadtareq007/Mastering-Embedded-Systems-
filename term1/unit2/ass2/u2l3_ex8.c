/*
 ============================================================================
 Name        : u2l3_ex8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main() {
	float a,b,res;
	char operator;
	printf("enter an operator '+' or '-' or '*' or '/':");
	fflush(stdin);fflush(stdout);
	scanf("%c",&operator);
printf("enter an operands :");
fflush(stdin);fflush(stdout);
scanf("%f %f",&a,&b);
switch (operator){
case '+':{
	res=a+b;
	printf("%f + %f=%f",a,b,res);
}
break;
case '-':{
	res=a-b;
	printf("%f - %f=%f",a,b,res);
}
break;
case'*':{
	res=a*b;
	printf("%f * %f=%f",a,b,res);
}
break;
case'/':{
	res=a/b;
	printf("%f / %f=%f",a,b,res);
}
break;

}
}
