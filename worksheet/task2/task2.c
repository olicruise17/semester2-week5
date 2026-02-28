/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Oliver Cruise
 * ID: 201823825
 */

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void){

	// initialise variables

	long decimal=0;
	char hex[9];

	// get user input and save using scanf

	printf("Enter a hexadecimal:");
	scanf("%8s",hex);


	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");

	// gets length of inputted hex

	int len = strlen(hex);

	// loops through each digit in the hex string

	for (int i=0; i<len; i++) {
		int digit;

		// converts each hex digit to a number

		if (hex[i] >= '0' && hex[i] <= '9') {
			digit = hex[i] - '0';
		}
		else if (hex[i] >= 'A' && hex[i] <= 'F'){
			digit = hex[i] - 'A' + 10;
		}
		else if (hex[i] >= 'a' && hex[i] <= 'f'){
			digit = hex[i] - 'a' + 10;
		}

		// prints error if not a valid hex digit

		else {
			printf("Error: Invalid Hexadecimal\n");
			return 1;
		}
		
		// keeps running total

		decimal = decimal * 16 + digit;

		
	}
	
	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}