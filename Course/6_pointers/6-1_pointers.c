
// # include <stdio.h>

// int main() {
//     int i = 34;
//     int *j;
//     j = &i;

//     printf("The value of i is : %d\n" , i);
//     printf("The address of i is : %u\n" , &i);
//     printf("\n");
//     printf("The value of i is : %d\n" , *j);
//     printf("The address of i is : %u\n" , j);
//     printf("\n");
//     printf("The value of j is : %d\n" , j);
//     printf("The value of j is : %d\n" , *(&j));
//     printf("The address of j is : %u\n" , &j);
    
//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------

// # include <stdio.h>
// int sum (int a , int b);
// int main() {
//     int x = 4;
//     int y = 7;
//     printf("The value of x and y is %d and %d\n" , x ,y);
//     printf("The value of 4 + 7 is : %d\n" , sum(x,y));
//     printf("The value of x and y after func call is %d and %d\n" , x ,y);

//     return 0;
// }
// int sum (int a , int b) {
//     int c;
//     c = a + b;
//     a = 34343;
//     b = 23223;
//     return c;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------

// # include <stdio.h>

// void wrong_swap (int a , int b);
// void swap (int *a , int *b);

// int main() {
//     int x , y ;
//     x = 4 , y = 7 ;

//     printf("The va;ue of x and y before swawp is : %d , %d\n" , x ,y);
//     // wrong_swap(x , y);      // will not work
//     swap(&x , &y);             // will work 
//     printf("The va;ue of x and y after swawp is : %d , %d\n" , x ,y);

//     return 0;
// }

// void wrong_swap (int a , int b) {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }

// void swap (int *a , int *b) {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------
