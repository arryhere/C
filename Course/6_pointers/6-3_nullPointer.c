// /*
// Null pointer is a pointer which has a value reserved for indicating that the pointer or reference does not refer to a valid object.
// A null pointer is guaranteed to compare unequal to any pointer that points to a valid object.
// Dereferencing a null pointer is undefined behavior in C, and a conforming implementation is allowed,
//     to assume that any pointer that is dereferenced is not null.

// NULL pointer is a specific pointer which is mentioned in C standard and it has specific purposes.
// NULL pointer gives a functionality to C programmer to check whether a pointer is legitimate or not

// To Initialize a pointer variable in cases where pointer variable has not been assigned any valid address yet.
// To check for legitimate address location before accessing any pointer variable.
// By doing so, we can perform error handling while using pointers with c.
// Example of such error handling can be: dereference pointer variable only if it's not NULL To pass a null pointer to a function argument
//     when we don't want to pass any valid memory address.

// NULL macro is defined as ((void *10) in header files of most of the C compiler implementations.
// NULL pointer vs Uninitialized pointer - An uninitialized pointer contains an undefined value.
// A null pointer stores a defined value, which is the one decided by the environment to not be a valid memory address for any object.
// NULL pointer vs Void Pointer – Null pointer is a value where as void pointer is a type


// */

// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// int main() {
//     int a = 34;
//     int *p = &a;
//     int *p2 = NULL;
//     printf("%u\n",p);
//     printf("%u\n",p2);

//     return 0;
// }