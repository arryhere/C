
// # include <stdio.h>

// int main() {
//     int marks[4];
//     marks[0] = 45;
//     marks[1] = 55;
//     marks[2] = 67;
//     marks[3] = 44;

//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------------

// # include <stdio.h>

// int main() {
//     int marks[4];

//     printf("Enter the marks of student 1 : ");
//     scanf("%d" , &marks[0]);
//     printf("Enter the marks of student 2 : ");
//     scanf("%d" , &marks[1]);
//     printf("Enter the marks of student 3 : ");
//     scanf("%d" , &marks[2]);
//     printf("Enter the marks of student 4 : ");
//     scanf("%d" , &marks[3]);

//     printf("You have entered : %d , %d , %d , %d" , marks[0] , marks[1] , marks[2] , marks[3]);
//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------------

// # include <stdio.h>

// int main() {
//     int marks[5];
//     int i;

//     for (i=0 ; i<5 ; i++) {
//         printf("Enter the marks of student %d : " , i+1);
//         scanf("%d" , &marks[i]);
//     }
//     for (i=0 ; i<5 ; i++) {
//         printf("The marks of student %d is : %d\n" , i+1 , marks[i]);
//     }
//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------------

// # include <stdio.h>

// int main() {
//     int a[] = {34,55,67};
//     printf("The value of a[0] is : %d\n" , a[0]);
//     printf("The value of a[1] is : %d\n" , a[1]);
//     printf("The value of a[2] is : %d\n" , a[2]);

//     float b[] = {3.4,5.5,6.7};
//     printf("The value of b[0] is : %.2f\n" , b[0]);
//     printf("The value of b[1] is : %.2f\n" , b[1]);
//     printf("The value of b[2] is : %.2f\n" , b[2]);



//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------------

// int is 4 bytes , char is 1 bytes , float is 4 bytes

// # include <stdio.h>

// int main() {
//     int i = 30;
//     int *j = &i;
//     printf("The value of j is : %u\n" , j);
//     j++;
//     j++;
//     printf("The value of j is : %u\n" , j);


//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------------

// # include <stdio.h>

// int main() {
//     int marks[4];
//     int *ptr;
//     ptr = &marks[0];
//     int i;

//     for (i=0 ; i<4 ; i++) {
//         printf("Enter the marks for student %d : " , i+1);
//         scanf("%d" , ptr);
//         ptr++;
//     }
//     for (i=0 ; i<4 ; i++) {
//         printf("The marks of student %d is : %d\n" , i+1 , marks[i]);
//     }


//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------------

// # include <stdio.h>

// // void printArray (int *ptr , int n) {
// //     for (int i=0 ; i<n ; i++) {
// //         printf("The value of element %d is : %d\n" , i+1 , *(ptr+i));
// //     }
// // }

// void printArray (int a[] , int n) {
//     for (int i=0 ; i<n ; i++) {
//         printf("The value of element %d is : %d\n" , i+1 , a[i]);
//     }
//     a[2] = 555;
// }

// int main() {
//     int arr[] = {1,2,3,4,5,6,7};
//     printArray(arr,7);
//     printf("%d" , arr[2]);
//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------------

