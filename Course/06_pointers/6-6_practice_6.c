
// 1. write a program to  print the address of a variable. use this address to get the value of this variable.

// # include <stdio.h>

// int main() {
//     int a = 4;
//     // int *b = &a;                               // can be used also
//     printf("The address of a is : %u\n" , &a);
//     printf("The value of a is : %d\n" , *(&a));

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------

// 2. write a program having a variable i. print the address of i. pass the variable to a func and print its address. 
//    are these addresses same ? why ?

// # include <stdio.h>
// void printAdd (int a);
// int main() {
//     int i = 5;
//     printf("The value of i is : %d\n" , i);
//     printf("The address of i is : %u\n" , &i);
//     printAdd(i);

//     return 0;
// }

// void printAdd (int a) {                               // copy of i being being passsed
//     printf("The address of i is : %u\n" , &a);
// }

// output --> diffrent address

// --------------------------------------------------------------------------------------------------------------------------------------------

// 3. write a program to change the value of a variable to ten times of its current value.
//    write a function and pass the value by reference.

// # include <stdio.h>
// int ten_times (int *a);

// int main() {
//     int a;
//     printf("Enter the number : ");
//     scanf("%d" , &a);

//     ten_times(&a);
//     printf("Ten times the value of %d is : %d\n" , a ,ten_times(&a) );


//     return 0;
// }
// int ten_times (int *a) {
//     int mul;
//     mul = (*a) * 10;
//     return mul;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------

// 4. write a program to print the value of a variable i by using "pointer to pointer" type of variables.

// # include <stdio.h>

// int main() {
//     int i = 5;
//     int *j = &i;
//     int **k = &j;

//     printf("The value of i is : %d" , *(*k));


//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------

// 5. write a program using functions  which calculates the sum and average of 2 numbers. 
//    use pointers and print the values of sum and average in main()


// # include <stdio.h>
// float sum (float *a , float *b);
// float average (float *a , float *b);


// int main() {
//     float x , y , s , avg;

//     printf("Enter the first number : ");
//     scanf("%f" , &x);
//     printf("Enter the second number : ");
//     scanf("%f" , &y);
//     printf("\n");

//     s = sum(&x , &y);
//     avg = average(&x , &y);

//     printf("The sum of %.2f and %.2f is : %.2f\n" , x , y , s);
//     printf("The average of %.2f and %.2f is : %.2f\n" , x , y , avg);


//     return 0;
// }

// float sum (float *a , float *b) {
//     float s;
//     s = ( *a + *b );
//     return s;
// }

// float average (float *a , float *b) {
//     float avg;
//     avg = ( *a + *b )/2 ;
//     return avg;
// }

// --------------------------------------------------------------------------------------------------------------------------------------------

