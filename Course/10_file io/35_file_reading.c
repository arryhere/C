// # include <stdio.h>
// # include <string.h>

// int main() {
//     FILE *ptr;
//     ptr = fopen("sample2.txt" , "r");

//     int num;
//     fscanf(ptr , "%d" , &num);
//     printf("The value of num is : %d\n" , num);

//     int num2;
//     fscanf(ptr , "%d" , &num2);
//     printf("The value of num is : %d\n" , num2);

//     fclose(ptr);

//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------------

// # include <stdio.h>
// # include <string.h>

// int main() {
//     FILE *ptr;
//     ptr = fopen("sample2.txt" , "r");
//     if (ptr == NULL) {
//         printf("This file does not exist.");
//     }
//     else {
//         int num;
//         fscanf(ptr , "%d" , &num);
//         printf("The value of num is : %d\n" , num);

//         int num2;
//         fscanf(ptr , "%d" , &num2);
//         printf("The value of num is : %d\n" , num2);

//         fclose(ptr);

//     }
    
//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------------
