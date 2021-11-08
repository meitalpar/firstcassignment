#include "NumClass.h"

	int isPrime (int num){
		if (num==1) return 1;
			for (int i=2;i<num;i++){
				if (num%i==0) return 0;
			}
		return 1;
		}
	
	
	
	
	
	int isStrong(int num){
		int sum=0;
		int fin=num;
			while (num!=0){
			int digit=num%10;
			int f=1;
				for(int i=1;i<=digit;i++){
				f=f*i;
				}
			sum+=f;
			num=num/10;
			}
			
				if (sum==fin) return 1;
			return 0;
		}
			
