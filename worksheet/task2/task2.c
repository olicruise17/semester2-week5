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
	long decimal=0;
	char hex[9];


	printf("Enter a hexadecimal:");
	scanf("%8s",hex);


	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");

	int len = strlen(hex);

	for (int i=0; i<len; i++) {
		if (hex[i] == '0') {
			decimal = decimal + (0 * (pow(16,strlen(hex)-i-1)));
		}
		else if (hex[i] == '1') {
			decimal = decimal + (1 * (pow(16,strlen(hex)-i-1)));
		}
		else if (hex[i] == '2') {
			decimal = decimal + (2 * (pow(16,strlen(hex)-i-1)));
		}
		else if (hex[i] == '3') {
			decimal = decimal + (3 * (pow(16,strlen(hex)-i-1)));
		}
		else if (hex[i] == '4') {
			decimal = decimal + (4 * (pow(16,strlen(hex)-i-1)));
		}
		else if (hex[i] == '5') {
			decimal = decimal + (5 * (pow(16,strlen(hex)-i-1)));
		}
		else if (hex[i] == '6') {
			decimal = decimal + (6 * (pow(16,strlen(hex)-i-1)));
		}
		else if (hex[i] == '7') {
			decimal = decimal + (7 * (pow(16,strlen(hex)-i-1)));
		}
		else if (hex[i] == '8') {
			decimal = decimal + (8 * (pow(16,strlen(hex)-i-1)));
		}
		else if (hex[i] == '9') {
			decimal = decimal + (9 * (pow(16,strlen(hex)-i-1)));
		}
		else if (hex[i] == 'A') {
			decimal = decimal + (10 * (pow(16,strlen(hex)-i-1)));
		}
		else if (hex[i] == 'B') {
			decimal = decimal + (11 * (pow(16,strlen(hex)-i-1)));
		}
		else if (hex[i] == 'C') {
			decimal = decimal + (12 * (pow(16,strlen(hex)-i-1)));
		}
		else if (hex[i] == 'D') {
			decimal = decimal + (13 * (pow(16,strlen(hex)-i-1)));
		}
		else if (hex[i] == 'E') {
			decimal = decimal + (14 * (pow(16,strlen(hex)-i-1)));
		}
		else if (hex[i] == 'F') {
			decimal = decimal + (15 * (pow(16,strlen(hex)-i-1)));
		}
		else {
			printf("Error: Invalid Hexadecimal\n");
		}

		
	}
	
	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}