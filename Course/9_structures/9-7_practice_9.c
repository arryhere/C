// 1. create a 2-d vector using structures in c.

// # include <stdio.h>
// # include <string.h>

// struct vector2d {
//     int x;
//     int y;
// };

// int main() {
//     struct vector2d v1,v2;
//     v1.x = 34;
//     v1.y = 54;
//     printf("v1 : x dimension is %d , y dimension is %d\n",v1.x,v1.y);

//     v2.x = 344;
//     v2.y = 544;
//     printf("v1 : x dimension is %d , y dimension is %d\n",v2.x,v2.y);

//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------------

// 2. write a function sumVector which returns the sum of two vectors passed to it. the vector must be 2 dimensional.

// # include <stdio.h>
// # include <string.h>

// void sumVector (int x1 ,int y1 , int x2 , int y2) {
//     int sum_x = x1+x2;
//     int sum_y = y1+y2;
//     printf("The sum of x dimension is %d and the sum of y dimension is %d", sum_x,sum_y);
// }

// struct vector2d {
//     int x;
//     int y;
// };

// int main() {
//     struct vector2d v1,v2;
//     v1.x = 5;
//     v1.y = 4;
//     printf("v1 : x dimension is %d , y dimension is %d\n",v1.x,v1.y);

//     v2.x = 6;
//     v2.y = 7;
//     printf("v1 : x dimension is %d , y dimension is %d\n",v2.x,v2.y);

//     sumVector(v1.x , v1.y , v2.x , v2.y);

//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------------

// 3. write a function sumVector of type "structure" which returns the sum of two vectors passed to it. the vector must be 2 dimensional.

// # include <stdio.h>
// # include <string.h>

// struct vector2d {
//     int x;
//     int y;
// };

// struct vector2d sumVector (struct vector2d v1 , struct vector2d v2) {
//     struct vector2d result;
//     result.x = v1.x + v2.x;
//     result.y = v1.y + v2.y;
//     return result;
// }

// int main() {
//     struct vector2d v1,v2,sum;
//     v1.x = 3;
//     v1.y = 5;
//     printf("v1 : x dimension is %d , y dimension is %d\n",v1.x,v1.y);

//     v2.x = 8;
//     v2.y = 2;
//     printf("v1 : x dimension is %d , y dimension is %d\n",v2.x,v2.y);

//     sum = sumVector(v1 , v2);
//     printf("Sum of x dimension is : %d\n",sum.x);
//     printf("Sum of y dimension is : %d\n",sum.y);

//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------------


// 4. create an array of 5 complex numbers using structures and display them with the help of display function.
//    The values must be taken as an input from the user.

// # include <stdio.h>
// # include <string.h>

// struct complex_no {
//     int real;
//     int imaginary;
// };

// void display (struct complex_no c) {
//     printf("The real part of the complex number is : %d\n" , c.real);
//     printf("The imaginary part of the complex number is : %d\n" , c.imaginary);
// }

// int main() {

//     struct complex_no c[5];

//     for (int i=0 ; i<5 ; i++) {
//         printf("\n----- Complex Number %d -----\n", i+1);

//         printf("Enter the real value of complex number %d : ", i+1);
//         scanf("%d" , &c[i].real);

//         printf("Enter the imaginary value of complex number %d : ", i+1);
//         scanf("%d" , &c[i].imaginary);
//     }
//     for (int i=0 ; i<5 ; i++) {
//         printf("\n----- Complex Number %d -----\n" , i+1);
//         display(c[i]);
//     }



//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------------

// 5. write a structure capable of storing dates. write a function to compare those dates.

// # include <stdio.h>
// # include <string.h>

// struct date {
//     int year;
//     int month;
//     int day;
// };

// void display (struct date d) {
//     printf("The date is : %d/%d/%d\n" , d.year , d.month , d.day);
// }

// int datecmp (struct date d1 , struct date d2) {
//     if (d1.year > d2.year) {
//         return 1;
//     }
//     else if (d1.year < d2.year) {
//         return -1;
//     }
//     else if (d1.month > d2.month) {
//         return 1;
//     }
//     else if (d1.month < d2.month) {
//         return -1;
//     }
//     else if (d1.day > d2.day) {
//         return 1;
//     }
//     else if (d1.day < d2.day) {
//         return -1;
//     }
//     else {
//         return 0;
//     }
// }

// int main() {
//     struct date d1 = {2021 , 11 , 7};
//     display(d1);

//     struct date d2 = {2021 , 11 , 7};
//     display(d2);

//     int result = datecmp(d1 , d2);

//     if (result == 1) {
//         printf("Date d1 > d2");
//     }
//     else if (result == -1) {
//         printf("Date d1 < d2");
//     }
//     else if(result == 0) {
//         printf("Date d1 = d2");
//     }

//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------------
