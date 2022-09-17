// Import to use printf 
#include <stdio.h>

int main() {
    // TODO Print all data types

    char first_initial = 'M';
    // My first initial is M
    printf("My first initial is %c\n", first_initial);

    char hello[] = "hello";
    // Oh, hello!
    printf("Oh, %s!\n", hello);

    char dollar_sign = 36;  
    // Did you know that the ASCII code 36 represents "$"?
    printf("Did you know that the ASCII code %d represents \"%c\"?\n", dollar_sign, dollar_sign);

    unsigned char eight_bit_max_value = 255;
    // Did you know that eight bytes have a maximum value of 255?
    printf("Did you know that eight bytes have a maximum value of %d?\n", eight_bit_max_value);

    int favorite_number = 100;
    // Did you know that my favorite number is 100?
    printf("Did you know that my favorite number is %d?\n",favorite_number);

    unsigned int big_number = 4294967295L;
    printf("An unsigned integer can have a maxiumum value of %u!\n", big_number);


    
    
    // Return success code
    return 0;
}