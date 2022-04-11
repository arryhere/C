// 1.1 . write a program to take string as an input from the user using %c and %s. confirm that the strings are equal.

// # include <stdio.h>
// # include <string.h>

// int main() {
//     char str1[50];
//     char str2[50];

//     printf("Enter the string in str1 : ");
//     scanf("%s" , str1);

//     int len = strlen(str1);
//     int len2 = strlen(str2);
    
//     for (int i=0 ; i<len ; i++) {
//         printf("Enter the %d character (max 10 characters) : " , i+1);
//         fflush(stdin);
//         scanf("%c" , &str2[i]);
//     }

//     printf("str1 : %s\n" , str1);
//     printf("str2 : %s\n" , str2);

//     int val = strcmp(str1,str2);
//     printf("%d" , val);

//     printf("the length of str1 is : %d\n",len);
//     printf("the length of str2 is : %d\n",len2);

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------

// 1.2 . write a program to take string as an input from the user using %c and %s. confirm that the strings are equal.

// # include <stdio.h>

// int main() {
//     char str1[50];
//     char str2[50];
//     char c;
//     int i = 0;

//     printf("Enter the value of first string : ");
//     scanf("%s" , str1);
    

//     while(c!='\n') {
//         printf("Enter the value of second string char by char : ");
//         fflush(stdin);
//         scanf("%c" , &c);
//         str2[i] = c;
//         i++;
//     }
//     str2[i] = '\0';

//     printf("The value of str1 is : %s\n",str1);
//     printf("The value of str2 is : %s\n",str2);

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------

// 2. write your own version of strlen from <string.h>

// # include <stdio.h>
// # include <string.h>

// int main() {
//     char a[] = "arry";
//     int len = ( sizeof(a)/sizeof(a[0]) ) - 1;
//     printf("%d\n" , len);

//     int len2 = strlen(a);
//     printf("%d\n" , len2);



//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------

// 3. write a function slice() to slice a string. it should change the original string such that it is now the sliced string.
//    take m and n as the start and ending position for slice.

// --------------------------------------------------------------------------------------------------------------------------------------------

// 4. write a program to encrypt a string by adding 1 to the ascii calue of its characters.

// # include <stdio.h>
// void encrypt(char *c) {
//     char *ptr = &c[0];
//     while (*ptr != '\0') {
//         *ptr = *ptr + 1;
//         ptr++;
//     }
// }

// int main() {
//     char c[] = "hello";
//     encrypt(c);
//     printf("Encrypted string is : %s" , c);

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------

// 5. write a program to decrypt the string in problem 4.

// # include <stdio.h>
// void encrypt(char *c) {
//     char *ptr = &c[0];
//     while (*ptr != '\0') {
//         *ptr = *ptr + 1;
//         ptr++;
//     }
// }
// void decrypt(char *c) {
//     char *ptr = &c[0];
//     while (*ptr != '\0') {
//         *ptr = *ptr - 1;
//         ptr++;
//     }
// }

// int main() {
//     char c[] = "hello";
//     encrypt(c);
//     printf("Encrypted string is : %s\n" , c);
//     decrypt(c);
//     printf("Decrypted string is : %s\n" , c);


//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------

// 6. write a program to count the occurance of a given character in a string.

// # include <stdio.h>

// int occurance(char *arr , char c);

// int main() {
//     char str[] = "Arrrrrrrrrrrrrry";
//     char c = 'r';
//     int count = occurance(str , c);
//     printf("The occurance of %c is : %d" , c,count);


//     return 0;
// }
// int occurance(char *arr , char c) {
//     char *ptr = &arr[0];
//     int count = 0;
//     while (*ptr != '\0') {
//         if (*ptr == c) {
//             count = count+1;
//         }
//         ptr++;
//     }
//     return count;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------

// 7. write a program to chech whether a given character is present in a string.

// # include <stdio.h>

// int occurance(char *arr , char c);

// int main() {
//     char str[] = "HELLOr";
//     char c = 'r';
//     int count = occurance(str , c);

//     if (count == 1) {
//         printf("The character '%c' is present in the string." , c);
//     }
//     else {
//         printf("The character '%c' is NOT present in the string." , c);
//     }

//     return 0;
// }
// int occurance(char *arr , char c) {
//     char *ptr = &arr[0];
//     int count = 0;
//     while (*ptr != '\0') {
//         if (*ptr == c) {
//             count = count+1;
//             break;
//         }
//         ptr++;
//     }
//     return count;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------