/******************
Name: Samantha Lauren Newmark
ID: 346587629
Assignment: 1
*******************/
#include <stdio.h>

int main() {
	// reassigned throughout #1, 2, 3, 4
	int number, position, bit;  
  
	//-----------------------Task #1: What bit-----------------------//

	printf("What bit:\n");

	// Scan two integers (representing number and a position)
	printf("Please enter a number:\n");
	scanf("%d", &number);
	printf("Please enter a position:\n");
	scanf("%d", &position);

	// Print the bit in this position.
	bit = (number >> position) & 1;
	printf("The bit in position %d of number %d is: %d\n", position, number, bit);
  
	//-----------------------Task #2: Set bit-----------------------//

	printf("\nSet bit:\n");

	// used only in #2
	int onNum, offNum;

	// Scan two integers (representing number and a position)
	printf("Please enter a number:\n");
	scanf("%d", &number);
	printf("Please enter a position:\n");
	scanf("%d", &position);

	// Make sure the bit in this position is "on" (equal to 1)
	onNum = number | (1 << position);

	// Print the output
	printf("Number with bit %d set to 1: %d\n", position, onNum);

	// Now make sure it's "off" (equal to 0)
	offNum = number & ~(1 << position);

	// Print the output
	printf("Number with bit %d set to 0: %d\n", position, offNum);

	//-----------------------Task #3: Toggle bit-----------------------//

	printf("\nToggle bit:\n");

	// Scan two integers (representing number and a position)
	printf("Please enter a number:\n");
	scanf("%d", &number);
	printf("Please enter a position:\n");
	scanf("%d", &position);

	// Toggle the bit in this position
	number = number ^ (1 << position);

	// Print the new number
	printf("Number with bit %d toggled: %d\n", position, number);
  
	//-----------------------Task#4: Even - Odd-----------------------//

	printf("\nEven - Odd:\n");

	// Scan an integer
	printf("Please enter a number:\n");
	scanf("%d", &number);

	// If the number is even - print 1, else - print 0.
	bit = (number & 1) ^ 1;
	printf("%d\n", bit);  // checks LSB -- 1 is odd, 0 is even
  
	//-----------------------Task #5: 3, 5, 7, 11-----------------------//

	printf("\n3, 5, 7, 11:\n");

	// used only in #5
	int firstNum, secondNum, sum;
	int posit3 = 3, posit5 = 5, posit7 = 7, posit11 = 11;  // reassigned below
	
	// Scan two integers in octal base
	printf("Please enter the first number (octal):\n");
	scanf("%o", &firstNum);
	printf("Please enter the second number (octal):\n");
	scanf("%o", &secondNum);

	// sum them up and print the result in hexadecimal base
	sum = firstNum + secondNum;
	printf("The sum in hexadecimal: %X\n", sum);

	// Print only 4 bits, in positions: 3,5,7,11 in the result.
	posit3 = (sum >> posit3) & 1;
	posit5 = (sum >> posit5) & 1;
	posit7 = (sum >> posit7) & 1;
	posit11 = (sum >> posit11) & 1;
	printf("The 3,5,7,11 bits are: %d%d%d%d\n", posit3, posit5, posit7, posit11);

	// Hi! :)
	printf("Bye!\n");
	return 0;
}
