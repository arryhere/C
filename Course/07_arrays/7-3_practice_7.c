// 1. create an array of 10 numbers. verify using pointer arithmetic that ptr+2 points to the third element where ptr is a pointer pointing to the first element of the array.

// # include <stdio.h>

// int main() {
//     int arr[10];
//     int *ptr = &arr[0];       // int *ptr = arr;
//     printf("%u\n" , &arr[2]);
//     printf("%u\n" , ptr+2);
    
//     if (&arr[2] == ptr+) {
//         printf("These point to the same address.");
//     }
//     else {
//         printf("These do not point to the same address.");
//     }

//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------------

// 2. write a program to create an array of 10 integers and store multiplication table of 5 in it.

// # include <stdio.h>

// int main() {
//     int num;
//     int range;

//     printf("Enter the number : ");
//     scanf("%d" , &num);
//     printf("Enter the range : ");
//     scanf("%d" , &range);
    
//     int mul[range];
    
//     for (int i=1 ; i<=range ; i++) {
//          int result = num*i;
//          mul[i-1] = result;
//     }

//     for (int i=1 ; i<=range ; i++) {
//         printf("%d x %d = %d\n" , num,i,mul[i-1]);
//     }


//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------------

// 3. write a program containing a function which reverses a array passed to it.

// # include <stdio.h>
// void reverse (int *arr , int n) {
//     int temp;
//     for (int i=0 ; i<(n/2) ; i++) {
//         temp = arr[i];
//         arr[i] = arr[n-i-1];
//         arr[n-i-1] = temp;
//     }
// }

// int main() {
//     int n = 7;
//     int arr[] = {1,2,3,4,5,6,7};
//     reverse(arr,7);
//     for (int i=0 ; i<(n) ; i++) {
//         printf("the value of %d element is : %d\n" , i , arr[i]);
//     }


//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------------

// 4. write a program containing functions which counts the number of positive integers in an array.


// # include <stdio.h>
// int count (int *arr , int n);

// int main() {
//     int n = 2;
//     int arr[] = {2,4};
//     int c = count (arr , n);
//     printf("The no of positive integers in the given array is : %d" , c);


//     return 0;
// }

// int count (int *arr , int n) {
//     int val = 0;
//     for (int i=0 ; i<n ; i++) {
        
//         if (arr[i]%2 == 0) {
//             val = val + 1;
//         }
//         else{
//             val = val;
//         }
//     }
//     return val;
// }

// ------------------------------------------------------------------------------------------------------------------------------------------

// 5. create an array of size 3x10 containing multiplication tables of the numbers 2,7 and 9 respectively.

// # include <stdio.h>
// void printMulTbl ( int*arr , int num , int n);

// int main() {
//     int mulTable[3][10];
//     printMulTbl(mulTable[0] , 2 , 10 );
//     printMulTbl(mulTable[0] , 7 , 10 );
//     printMulTbl(mulTable[0] , 9 , 10 );

//     return 0;
// }

// void printMulTbl ( int*arr , int num , int n) {
    
//     for (int i=1 ; i<=n ; i++) {
//         int result = num*i;
//         arr[i-1] = result;
//     }

//     for (int i=1 ; i<=n ; i++) {
//         printf("%d x %d = %d\n" , num,i,arr[i-1]);
//     }
// }

// ------------------------------------------------------------------------------------------------------------------------------------------

// 6. create a 3 dimensional array and print the address of its elements in increasing order.

// # include <stdio.h>

// int main() {
//     int arr[2][3][4];

//     for (int i=0 ; i<2 ; i++) {
//         for (int j=0 ; j<3 ; j++){
//             for (int k=0 ; k<4 ; k++){
//                 printf("The address of arr[%d][%d][%d] is : %u\n" , i,j,k,&arr[i][j][k]);
//             }
//         }
//     }


//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------------
