// 1. write a program to read 3 integrs from a file.

// # include <stdio.h>
// # include <string.h>

// int main() {
//     FILE *fptr;
//     fptr = fopen ("file1.txt" , "r");
//     for (int i=1 ; i<=3 ; i++) {
//         int num_i;
//         fscanf(fptr , "%d" , &num_i);
//         printf("Num%d is : %d\n" ,i,num_i);

//     }
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------------------------

// 2.   write a program to generate multiplication table of a given number in text format.
//      make sure the file is readable anf well formated.

// # include <stdio.h>
// # include <string.h>

// int main() {
    
//     int n , range , result ;
//     printf("Enter the number : ");
//     scanf("%d" , &n);
//     printf("Enter the range : ");
//     scanf("%d",&range);

//     FILE *ptr;
//     ptr = fopen("Multiplication table.txt" , "w");

//     char name[50];
//     printf("Enter the name of file : ");
//     scanf("%s" , name);
//     fprintf(ptr , "%s\n" , name);

//     for (int i=1 ; i<=range ; i++) {
//         result = n*i;
//         fprintf(ptr , "%d x %d = %d\n" , n,i,result);

//     }
//     printf("Successfully generated multiplication table of : %d" , n);
//     fclose(ptr);

//     return 0;
// }

// ---------------------------------------------------------------------------------------------------------------------

// 3. write a program to read a txt file character by character and write its contents twice in a separate file.

// # include <stdio.h>
// # include <string.h>

// int main() {
//     FILE *ptr1;
//     FILE *ptr2;

//     ptr1 = fopen ("a.txt" , "r");
//     ptr2 = fopen ("b.txt" , "w");

//     char c = fgetc(ptr1);

//     while (c != EOF) {
//         fputc(c , ptr2);
//         fputc(c , ptr2);
//         c = fgetc(ptr1);
//     }

//     fclose(ptr1);
//     fclose(ptr2);

//     return 0;
// }

// ---------------------------------------------------------------------------------------------------------------------

// 4. write a program to take number from a file and the write it to the file with double its value.

// # include <stdio.h>
// # include <string.h>

// int main() {
//     int n;
//     FILE *ptr;
//     ptr = fopen("number.txt" , "r");
//     fscanf(ptr , "%d" , &n);

//     int new_n = n*2;
//     ptr = fopen("number.txt" , "w");
//     fprintf(ptr , "Old value : %d , New value : %d" , n , new_n);



//     fclose(ptr);
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------------------------
