#include <math.h>
	int rev (int n , int temp){

		if (n == 0) {
		    return temp ;
		}

		temp = temp * 10 + (n % 10) ;
		return rev (n / 10 , temp) ;

		}



	int isPalindrome (int num) {

		int number = num ;
		int temp = rev(number , 0) ;

		if (temp == num) {
		    return 1 ;
		}

		return 0 ;

		}






	int isArm(int n, int len){

		if ( n == 0) {
		    return 0 ;
		}

		else  {

		    return pow( (n%10) , len) + isArm(  (n/10) , len ) ;

		} 

		}





	int isArmstrong (int num){

		int length = 0 ;  
		int number = num ;

		while (number != 0) {

		length++ ;
		number = number/10 ;

		}


		int r = isArm(num , length) ;

		if (r == num) {

		    return 1 ;
		}

		return 0 ;

		}
