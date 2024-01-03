/*
Q.1 WAP to print all numbers that are divisible by both 3 & 5 from a given range using UDF.
*/

#include<stdio.h>

void div(){
	
	int a;
	
	printf("Enter number:- ");
	scanf("%d",&a);
	
	if(a%3==0 || a%5==0){
		printf("the numbers are divisible..");
	}else{
		printf("the numbers are not divisible..");
	}
	
}

main(){
	
	div();
	
}

/*
Enter number:- 15
the numbers are divisible..

Enter number:- 11
the numbers are not divisible..
*/
