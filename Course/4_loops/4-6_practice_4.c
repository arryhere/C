// 1. write a program to print multiplication table of a given number n.


// # include <stdio.h>

// int main() {

//     int i , num ;
//     i = 1;
//     printf("Enter the value of the number : ");
//     scanf("%d" , &num);

//     for (i = 1 ; i <= 10 ; i++) {
//         printf("%d x %d = %d \n" , num,i,num*i);
//     }


// return 0;

// }

// -------------------------------------------------------------------------------------------------------------------------------------

// 2. write a program to print multiplication table of a given number n in reverse order

// int main() {

//     int i , num ;
//     printf("Enter the value of the number : ");
//     scanf("%d" , &num);

//     for (i = 10 ; i <= 10 && i > 0 ; i--) {
//         printf("%d x %d = %d \n" , num,i,num*i);
//     }


// return 0;

// }

// -------------------------------------------------------------------------------------------------------------------------------------

// 3. write a program to sum first ten natural numbers using while loop.



// # include <stdio.h>

// int main() {
//     int i , num ;
//     i = 1;
//     int sum = 0;
//     printf("Enter the number : ");
//     scanf("%d", &num);

//     while ( i <= num) {
//         sum = sum + i;
//         i++;
//     }
//     printf("Sum of first %d natural numbers is : %d" , num,sum);



// return 0;

// }

// -------------------------------------------------------------------------------------------------------------------------------------

// 4. write a program to calculate the factorial of a given number using for loop.


// # include <stdio.h>

// int main() {
//     int num , i ;
//     printf("Enter the value of the number : ");
//     scanf("%d" , &num);
//     int fact = 1;

//     for (i = 1 ; i <= num ; i++) {
//         fact = fact* i;
//     }

//     printf("The factorial of %d is : %d" , num,fact);

// return 0;

// }

// -------------------------------------------------------------------------------------------------------------------------------------

// 5. write a program to check whether a number is is prime or not using loops.


// // # include <stdio.h>

// int main() {

//     int num , i , notPrime ;
//     notPrime = 0;
//     num = 4;

//     for (i = 2 ; i < num ; i++) {
//         if (num%i == 0) {
//             notPrime = 1;
//             break;
//         }
        
//     }

//     if (notPrime == 1){
//         printf("The number is not prime");
//     }
//     else {
//         printf("The number is prime");
//     }
    
        
// return 0;

// }

// -------------------------------------------------------------------------------------------------------------------------------------

