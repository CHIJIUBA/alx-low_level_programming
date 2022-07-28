#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
    unsigned long int key;
    unsigned long int result;
    unsigned long int hash_table_array_size = 1024;

    key = 5861846;
    result = key % hash_table_array_size;

    printf("%lu\n", result);

    return (0);
}