// # include <stdio.h>
// # include <string.h>

// int main() {
//     FILE *ptr;
//     ptr = fopen("getcdemo.txt" , "r");
//     char c = fgetc(ptr);
//     printf("The character is : %c\n", c);
//     char c2 = fgetc(ptr);
//     printf("The character is : %c\n", c2);

//     fclose(ptr);

//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------------


// # include <stdio.h>
// # include <string.h>

// int main() {
//     FILE *ptr;
//     ptr = fopen("putcdemo.txt" , "w");
//     putc('f', ptr);

//     fclose(ptr);
    
//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------------

// # include <stdio.h>
// # include <string.h>

// int main() {
//     FILE *ptr;
//     ptr = fopen("getcdemo.txt" , "r");
//     char c = fgetc(ptr);

//     while (c != EOF) {
//         printf ("%c" , c);
//         c = fgetc(ptr);
//     }

//     fclose(ptr);

//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------------
