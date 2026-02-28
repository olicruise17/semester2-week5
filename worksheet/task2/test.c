
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void){
	long decimal=0;
    int hex=2;
    char i="32";

    int len = strlen(hex);
    

    decimal = decimal + (0 * (pow(16,(len-i-1))));
    printf("%ld",decimal);
