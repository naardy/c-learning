//Desision Making
//The if statement - it allows as to check if the expression is true or false then execute different code according to the result ... 
//operator like ==,<,> , else , if else, NOT (!)  are used 
//
//int target = 10;
// if (target == 10) {
// printf ("Target is equal to 100")
//
// another exmple
//
	/*int foo = 1;
	int bar = 2;

	if (foo < bar) {
	    printf("foo is smaller than bar.");
	}

	if (foo > bar) {
    	printf("foo is greater than bar.");
	}*/


/* int foo = 1;
int bar = 2;
int moo = 3;

if (foo < bar && moo > bar) {
    printf("foo is smaller than bar AND moo is larger than bar.");
}

if (foo < bar || moo > bar) {
    printf("foo is smaller than bar OR moo is larger than bar.");
}*/ 

#include <stdio.h>

void guessNumber(int guess) {
 
    if (guess < 555) {
        printf("Your guess is too low.\n");
    } else if (guess > 555) {
        printf("Your guess is too high.\n");
    } else {
        printf("Correct. You guessed it!\n");
    }
}

int main() {
    guessNumber(500);
    guessNumber(600);
    guessNumber(555);
}
