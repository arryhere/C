// 1. What will be the output of the program ?

//     int a = 10;
//     if (a = 10) {
//         printf("I am 11");
//     }
//     else {
//         printf("I am not 11");
//     }

// output --> i am 11 , a=10 will resolve a=True

// -----------------------------------------------------------------------------------------------------------------------------------------

// 2. Write a program to find out whether a student is pass or fail, if it requires total 40% and atleast 33% in each subject to pass.
//    Assume 3 subjects and take marks as an input from the user.


// # include <stdio.h>

// int main() {

//     int sub1 , sub2 , sub3;
//     printf("Enter the marks of subject 1 : ");
//     scanf("%d" , &sub1);
//     printf("Enter the marks of subject 2 : ");
//     scanf("%d" , &sub2);
//     printf("Enter the marks of subject 3 : ");
//     scanf("%d" , &sub3);
    
//     int totalMarks = (sub1 + sub2 + sub3)/3;

//     if ( (totalMarks<40) || (sub1<33) || (sub2<33) ||(sub3<33) ) {
//         printf("You are failed ! , Total percentage is %d" , totalMarks);
//     }
//     else {
//         printf("You are passed ! , Total percentage is %d" , totalMarks);
//     }


// return 0;

// }

// -----------------------------------------------------------------------------------------------------------------------------------------

// 3. Calculate the income tax paid by an employee to the government as per the slabs mentioned below:
//      income slab                                 tax
//       2.5L - 5.0L                                 5%
//       5.0L - 10.0L                                20%
//       Above 10.0L                                 30%
// there is no tax below 2.5L .Take income amount as an input from the user.x

// # include <stdio.h>

// int main() {

//     float income , tax;
//     printf("Enter your income : ");
//     scanf("%f" , &income);

//     if (income < 250000) {
//         printf("There is no tax according to your income , enjoy !\n");
//         tax = 0;
//     }
//     else if ( (income >= 250000) && (income <= 500000) ) {
//         tax = (income-250000)*(5.0/100.0);
//     }
//     else if ( (income > 500000) && (income <= 1000000) ) {
//         tax = (income-250000)*(20.0/100.0);
//     }
//     else if (income > 1000000){
//         tax = (income-250000)*(30.0/100.0);
//     }
//     printf("The tax paid is : %f" , tax);


// return 0;

// }

// -----------------------------------------------------------------------------------------------------------------------------------------

// 4. Write a programto find  whether a year entered by the user is a  leap year or not. Take year as an user input.


// # include <stdio.h>

// int main() {

//     int year;
//     printf("Enter the year : ");
//     scanf("%d" , &year);

//     if (year%400 == 0) {
//         printf("The year %d is a leap year" , year);
//     }
//     else if (year%100 == 0) {
//         printf("The year %d is not a leap year" , year);
//     }
//     else if (year%4 == 0) {
//         printf("The year %d is a leap year" , year);
//     }
//     else {
//         printf("The year %d is not a leap year" , year);
//     }
// return 0;

// }

// -----------------------------------------------------------------------------------------------------------------------------------------

// 5. Write a program to find the greatest of 4 numbers

// # include <stdio.h>

// int main() {

//     int num1, num2, num3, num4 ;
//     printf("Enter num 1 : ");
//     scanf("%d" , &num1);

//     printf("Enter num 2 : ");
//     scanf("%d" , &num2);

//     printf("Enter num 3 : ");
//     scanf("%d" , &num3);

//     printf("Enter num 4 : ");
//     scanf("%d" , &num4);

//     int g1 , g2 ;

//     if (num1 > num2) {
//         g1 = num1;
//     }
//     else {
//         g1 = num2;
//     }

//     if (num3 > num4) {
//         g2 = num3;
//     }
//     else {
//         g2 = num4;
//     }

//     if (g1 > g2) {
//         printf("%d : is the greatest number of all 4 numbers." , g1);
//     }
//     else {
//         printf("%d : is the greatest number of all 4 numbers." , g2);
//     }

// return 0;

// }

// -----------------------------------------------------------------------------------------------------------------------------------------

// 6. Write a program to determine whether a character entered by the user is lower case.


// # include <stdio.h>

// int main() {
//     char ch;
//     printf("Enter The Character : ");
//     scanf("%c", &ch);

//     if (ch >='A' && ch <='Z') {
//         printf("Character is uppercase Letters");
//     }
//     else if (ch >= 'a' && ch <= 'z') {
//         printf("Character is lowercase Letters");
//     }
//     else {
//         printf("Non alphabet character");
//     }



// return 0;

// }

// -------------- or ---------------


// #include<stdio.h>
 
// int main() {
//    char ch;
 
//    printf("\nEnter The Character : ");
//    scanf("%c", &ch);
 
//    if (ch >= 97 && ch <= 122)
//       printf("Character is Lowercase Letters");
//    else
//       printf("Character is Not Lowercase Letters");
 
//    return (0);
// }

// -----------------------------------------------------------------------------------------------------------------------------------------
