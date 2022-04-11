// /*
// Uninitialized pointers are known as wild pointers 
// These pointers point to some arbitrary location in memory and may cause a program to crash or behave badly. 
// Dereferencing wild pointers can cause nasty bugs 
// It is suggested to always initialize unused pointers to NULL.


// */

// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// int main() {
//     // int a;
//     // int *p;     //wild pointer
//     // p = &a;
//     // printf("%u\n",p);
//     // printf("%u\n",&a);


//     int b = 44;
//     int *q = &b;
//     *q = 55;
//     printf("%d\n",*q);


//     return 0;
// }