#include "NumClass.h"
#include <math.h>

	int isArmstrong (int num){
	
		int number=num;
		int fin=num;
		int n=0;
		int sum=0;

			while (num!=0){
				n++;
				num=num/10;
			}
		
			while (number!=0){
			double digit=number%10;
				digit=pow(digit,n);
				sum=sum+digit;
				number=number/10;
				}
			if (fin==sum) return 1;
			return 0;
			
	}

			
			
			
	int isPalindrome (int num) {

		int n = num ;
		int reverse = 0 ;
		int remainder = 0 ;

		while (n != 0)
		{

		remainder = n % 10 ;
		reverse = reverse * 10 + remainder ;
		n = n/10 ; 

		}

			if (reverse == num) { return 1 ;}
			else { return 0 ;}


}	
			
			
			
		     
		     
		     
		     
		     
		     
		     
		     
		     
