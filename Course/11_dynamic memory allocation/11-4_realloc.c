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

//     // rellocation 
//     ptr = realloc(ptr,10*sizeof(int));
//     for(int i=0 ; i<10 ; i++){
//         printf("Enter the %d element :\n",i);
//         scanf("%d", &ptr[i]);
//     }

//     for(int i=0 ; i<10 ; i++){
//         printf("The value of the %d element is : %d\n",i,ptr[i]);
//     }

//     return 0;
// }