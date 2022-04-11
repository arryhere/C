// /*
// A pointer pointing to a freed memory location or the location whose content has been deleted is called a dangling pointer.
// Dangling pointers arise during object destruction when an object that has an incoming reference is deleted or deallocated,
//     without modifying the value of the pointer, so that the pointer still points to the memory location of the deallocated memory

// Deallocation of memory 
// Returning local variables in function calls 
// Variable going out of scope

// Dangling pointers can introduce nasty bugs in our C programs. 
// Dangling pointer bugs frequently become security holes at times. 
// We can avoid issues caused by dangling pointers by initializing pointer to NULL
// After de-allocating memory, pointer will be no longer dangling. 
// Assigning NULL value means pointer is a null pointer now.

// */

// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// int * funcDangling(){
//     int a, b, sum;
//     a = 34; b = 364; sum=a+b;
//     return &sum;
// }

// int main() {
//     int *p = (int *) malloc (10*sizeof(int));
//     p[0] = 44;
//     p[8] = 55;

//     printf("%d\n",*(p+8));
//     printf("%d\n",p[8]);

//     free(p);        //p is dangling

//     //

//     int * p2 = funcDangling();
//     // printf("%d\n",*p2);

//     //

//     int *p3;
//     {
//         int c = 12;
//     }
//     // p3 = &c;
//     printf("%d\n",*p3);


//     return 0;
// }