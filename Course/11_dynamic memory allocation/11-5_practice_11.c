// 1.Write a program to dynamically create an array of size 6 capable of storing 6 integers.
// Use the array to store 6 integers entered by the user.

// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// int main() {
//     int*ptr;
//     ptr = (int *) malloc(6*sizeof(int));

//     for(int i=0 ; i<6 ; i++){
//         printf("Enter the %d element :\n",i);
//         scanf("%d", &ptr[i]);
//     }

//     for(int i=0 ; i<6 ; i++){
//         printf("The value of the %d element is : %d\n",i,ptr[i]);
//     }


//     return 0;
// }

// -------------------------------------------------------------------------------------------------------------------------------------

// 2. Create an array dynamically capable of storing 5 integers. Now use realloc so that it can now store 10 integers.

// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// int main() {
//     int*ptr;
//     int n1 = 5;
//     ptr = (int *) malloc(n1*sizeof(int));

//     for(int i=0 ; i<n1 ; i++){
//         printf("Enter the %d element :\n",i);
//         scanf("%d", &ptr[i]);
//     }

//     for(int i=0 ; i<n1 ; i++){
//         printf("The value of the %d element is : %d\n",i,ptr[i]);
//     }

//     //realloc
//     int n2 = 10;
//     ptr = realloc(ptr,10*sizeof(int));
//     for(int i=0 ; i<n2 ; i++){
//         printf("Enter the %d element :\n",i);
//         scanf("%d", &ptr[i]);
//     }

//     for(int i=0 ; i<n2 ; i++){
//         printf("The value of the %d element is : %d\n",i,ptr[i]);
//     }

//     return 0;
// }

// -------------------------------------------------------------------------------------------------------------------------------------

// 3. Create an array of the multiplication table of 7 up to 10 (7x10=70). Use realloc to make it store 15 numbers(from 7x1 to 7x15).

// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// int main() {
    
//     int *ptr;
//     int n1 = 10;
//     ptr = (int *) malloc(n1*sizeof(int));

//     for(int i=0 ; i<n1 ; i++){
//         ptr[i] = 7*(i+1);
//         printf("7 x %d = %d\n",i+1,ptr[i]);
//     }
    
//     printf("\nAfter reallocating...\n\n");
    
//     int n2 = 15;
//     ptr = realloc(ptr,n2*sizeof(int));

//     for(int i=0 ; i<n2 ; i++){
//         ptr[i] = 7*(i+1);
//         printf("7 x %d = %d\n",i+1,ptr[i]);
//     }

//     return 0;
// }

// -------------------------------------------------------------------------------------------------------------------------------------