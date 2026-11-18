//VARIABLES AND TYPES
//c has several variables , but they are a few basic types
//intergers - whole numbers defined using char,int,short etc.
//unsigned intergers - the whole numbers can only be +ve defined using unsigned char, unsigned int , unsigned short etc 
//floating point numbers - numbers with fractions . float and double
//booleans - true or false - using bool 
//

#include<stdio.h>
int main(){
	int a = 3;
	float b = 4.5;
	double c = 5.25;
	float sum;

	sum = a + b + c ;

	printf("the sum is %f.", sum);
	return 0;

}
