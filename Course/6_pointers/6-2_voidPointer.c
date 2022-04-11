// /*
// a void pointer is a pointer that has no data type associated with it.
// a void pointer can be easily typecasted to any pointer type
// in simple language it is a general purpose pointer variable

// In dynamic memory allocation, malloc() and calloc() return (void *) type pointer 
// This allows these dynamic memory functions to be used to allocate memory of any data type. 
// This is because these pointers can be typecasted to any pointer type

// It is not possible to dereference void pointers.
// Pointer arithmetic is not allowed in C standards with void pointers.
// Hence it is not recommended to use pointer arithmetic with void pointers.


// */

// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h> 

// int main() {
//     int a = 345;
//     float b = 8.3;
//     void *ptr;
//     ptr = &a;

//     printf("%u , %d\n",ptr,*(int *)ptr);

//     void *ptr1;
//     ptr1 = &b;

//     printf("%u , %.2f\n",ptr1,*(float *)ptr1);

//     return 0;
// }

