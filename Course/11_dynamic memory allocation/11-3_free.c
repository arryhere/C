// # include <stdio.h>
// # include <stdlib.h>
// # include <string.h>

// int main() {

//     int*ptr;
//     ptr = (int *) malloc(100*sizeof(int));

//     for(int i=0 ; i<100 ; i++){
//         printf("Enter the %d element :\n",i);
//         scanf("%d", &ptr[i]);
//         free(ptr);
//     }

//     for(int i=0 ; i<6 ; i++){
//         printf("The value of the %d element is : %d\n",i,ptr[i]);
//     }

//     return 0;
// }