/*
Q.3 Write all leap years from a given range into a text file.
*/

#include<stdio.h>

int main (){

	int st;
	int end;
	
	printf("Enter the starting year :- ");
	scanf("%d",&st);
	
	printf("Enter the ending year :- ");
	scanf("%d",&end);
	
	FILE *ptr;
	int leepyear[100];
	int j;
	
	ptr = fopen("leep.txt","w");
	
	if(ptr == NULL){
		printf("File can't created...'");
	}
	for(j=st;j<=end;j++){
		if(j%4==0){	
		fprintf(ptr,"%d\t",j);
		}
	}
	return 0;
}

/*
Enter the starting year :- 2001
Enter the ending year :- 2050

2004	2008	2012	2016	2020	2024	2028	2032	2036	2040	2044	2048	
*/
