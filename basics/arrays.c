//ARRAYS - are special variables which can hold more than one value under the same cariable name, organized with an index.
//

//int numbers[10]; // defines an array of 10 int
//
#include<stdio.h>
int main(){

 int numbers[10];

/*populate the array*/

 numbers[0] = 10;
 numbers[1] = 20;
 numbers[2]= 30;
 numbers[3] = 40;
 numbers[4]= 50;
 numbers[5] = 60;
 numbers[6] = 70;

 printf("the 7th number in the array is %d", numbers[6]);
 return 0;

}


