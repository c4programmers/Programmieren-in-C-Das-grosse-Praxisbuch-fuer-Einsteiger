/* example 208 - structure pointer 1 */
#include <stdio.h>

struct numbers {            // declaration of structure numbers
   int num1;                // member num1
   int num2;                // member num2
};

int main(void)
{
   struct numbers data;                 // struct variable data of type numbers
   struct numbers *struct_ptr = &data;  // pointer to structure

   data.num1 = 2;   // direct assignment
   data.num2 = 4;

   printf("Address of data = %p\n", (void*)struct_ptr);

   /* access with dot operator and dereferencing */
   printf("num1 = %d\n", (*struct_ptr).num1);
   printf("num2 = %d\n", (*struct_ptr).num2);

   /* access with arrow operator (recommended) */
   printf("num1 = %d\n", struct_ptr->num1);
   printf("num2 = %d\n", struct_ptr->num2);

   return 0;
}
