/* example 223 – unions */
#include <stdio.h>

typedef union {
    int    id;       // 4 bytes
    char   ch;       // 1 byte
    double price;    // 8 bytes
} data;

int main(void)
{
    data myArray[3];  // create an array of type data



    /* store mixed data types in the array */
    myArray[0].id = 12345;
    myArray[1].ch = 'A';
    myArray[2].price = 129.90;

    printf("id: %d\n", myArray[0].id);
    printf("ch: %c\n", myArray[1].ch);
    printf("price: %.2lf\n", myArray[2].price);
    printf("size of data: %zu bytes\n", sizeof(data));

    return 0;
}
