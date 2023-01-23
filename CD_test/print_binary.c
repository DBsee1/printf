#include "main.h"

int print_binary(int number){
    int array[32], i = 0, count = 0;
    
    while (number >= 2){
        array[i] = number%2;
        number /= 2;
        i++;
    }
    array[i] = number;
    
    
    for(i; i >= 0; i--){
        count += _putchar(array[i] + '0');
    }

    return (count);
}
