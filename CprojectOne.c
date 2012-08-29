//First Project assignment: CprojectOne.c
//This project will request 3 integers.
//It will then output the product, the average, 
//and the largest of the 3 integers.

//Preprocessor directive
#include <stdio.h>

//This is the beginning of the program
int main(void) 
{
//Here, all the variables are initialized
	int integer1;
	int integer2;
	int integer3;
	int product;
	int sum;
	int average;

//Next, we have a print statement using the puts() function, 
//since its more secure for single arguments
	puts("Enter 3 integers \n");

//Then the keyboard input is read for the values of the integers
	scanf("%d%d%d", &integer1, &integer2, &integer3);

//Here, the getchar() function is used to halt for a return from the keyboard
	getchar();
	
//Now, we'll do a little math
	product = integer1 * integer2 * integer3;
	sum = integer1 + integer2 + integer3;
	average = (sum / 3);

//...and output the results of the math
	printf("The product of these three is %d\n", product);
	printf("The average of these three is %d\n", average);

//Now, we'll use some if() statements to compare the integers to find the largest
	if (integer1 > integer2) {
		if (integer1 > integer3) {
			printf("%d is the largest of the three integers.\n", integer1);
		}
	}
	if (integer2 > integer1) {
		if (integer2 > integer3) {
			printf("%d is the largest of the three integers.\n", integer2);
		}
	}
	if (integer3 > integer1) {
		if (integer3 > integer2) {
			printf("%d is the largest of the three integers.\n", integer3);
		}
	}
//Another getchar() to pause for key input
	getchar();
//end of program
}
