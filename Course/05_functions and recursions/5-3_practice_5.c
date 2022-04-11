
// 1.write a program using functions to find average of 3 numbers.

// # include <stdio.h>
// float avg (float a , float b , float c);
// int main() {
//     float a , b, c;
//     printf("----Average of 3 numbers----\n\n");

//     printf("Enter first number : ");
//     scanf("%f" , &a);

//     printf("Enter second number : ");
//     scanf("%f" , &b);

//     printf("Enter third number : ");
//     scanf("%f" , &c);

//     float d = avg (a,b,c);
//     printf("The average of %f , %f , %f is : %f" , a,b,c,d);


//     return 0;
// }

// float avg (float a , float b , float c) {

//     float avg = (a + b + c)/3;
//     return avg;
// }

// --------------------------------------------------------------------------------------------------------------------------------------

// 2. write a function to convert celcius to farenheit.

// # include <stdio.h>
// float temp_cnvt (float a);
// int main() {
//     printf("----Convert celcius to farenheit----\n\n");
//     float a;
//     printf("Enter the temp in celcius : ");
//     scanf("%f" , &a);
//     float c = temp_cnvt(a);
//     printf("The temperature in farenheit is : %f" , c);

    
//     return 0;
// }

// float temp_cnvt (float a) {
//     float b = ( a*(9.0/5.0) ) + 32.0;
//     return b;
// }

// --------------------------------------------------------------------------------------------------------------------------------------

// 3. write a function to calculate the force of attraction on a body of mass m exerted by earth. g = 9.8m/s

// # include <stdio.h>
// float force(float m);
// int main() {
//     printf("\n----Force of attraction on a body of mass m----\n\n");
//     float m;
//     printf("Enter the value of mass in kg : ");
//     scanf("%f" , &m);
//     // float a = force(m);
//     printf("The force of attraction on a body of mass %.3fkg is : %.3f\n" , m,force(m));


//     return 0;
// }
// float force(float m) {
//     float f = m * 9.8 ;
//     return f;
// }

// --------------------------------------------------------------------------------------------------------------------------------------

// 4. write a program using recursion to calculate nth element of fibonacci series
//    0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, .....

// #include<stdio.h>
// int fib (int f);
// int main ()
// {
//   int n, result;
//   printf ("Enter the Nth Number: ");
//   scanf ("%d", &n);
//   result = fib (n);
//   printf ("The %dth number in Fibonacci series is %d\n", n, result);
//   return 0;
// }
 
// /* function for  recursive fibonocci call */

// int fib (int f)
// {
//   if (f == 0)
//     {
//       return 0;
//     }
//   else if (f == 1)
//     {
//       return 1;
//     }
//   else
//     {
//       return (fib (f - 1) + fib (f - 2));
//     }
// }

// --------------------------------------------------------------------------------------------------------------------------------------

// 5.

// # include <stdio.h>

// int main() {
//     int a = 3;
//     printf("%d %d %d" , a , ++a , a++);


//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------

// 6. Recursive function to calculate sum of first n natural numbers.

// #include <stdio.h>
// int addNumbers(int n);
// int main() {
//     int num;
//     printf("Enter a positive integer: ");
//     scanf("%d", &num);
//     printf("Sum = %d", addNumbers(num));
//     return 0;
// }

// int addNumbers(int n) {
//     if (n != 0)
//         return n + addNumbers(n - 1);
//     else
//         return n;
// }

// --------------------------------------------------------------------------------------------------------------------------------------


// 7. write a program to print the following pattern
// *
// ***
// *****

// # include <stdio.h>

// int main() {
//     int i , j;
//     int num;
//     printf("\nEnter the num : ");
//     scanf("%d" , &num);
//     // char star = ' *';

//     for (i = 1 ; i <= num ; i++) {
//         for (j = 1 ; j <= (2*i-1) ; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
        


//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------
