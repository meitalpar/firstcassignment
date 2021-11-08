#include <stdio.h>
#include "NumClass.h"
 
	int main(){
	int number1;
	int number2;
	scanf("%d",&number1);
	scanf("%d",&number2);
	int b;
	int s;
	if (number1>number2) {
	 b=number1;
	 s=number2;
	 }
	else {b=number2; s=number1;}
	
	printf("The Armstrong numbers are:");
	for (int i=s;i<=b;i++){
		if(isArmstrong(i) ==1){
		printf(" ");
		printf("%d",i);
		}
	}
	printf("\n");	
	printf("The Palindromes are:");
	for (int i=s;i<=b;i++){
		if(isPalindrome(i) ==1){
		printf(" ");
		printf("%d",i);
		}
	}
	
	printf("\n");	
	printf("The Prime numbers are:");
	for (int i=s;i<=b;i++){
		if(isPrime(i) ==1){
		printf(" ");
		printf("%d",i);
		}
	}
	
	printf("\n");	
	printf("The Strong numbers are:");
	for (int i=s;i<=b;i++){
		if(isStrong(i) ==1){
		printf(" ");
		printf("%d",i);
		}
	}
	printf("\n");	
	}
		

		
		
		
		
		
