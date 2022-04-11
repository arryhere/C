// 1. Write a c program to calculate the area of a rectangle
//   a. using hardcode inputs
//   b. using user inputs

// a. - 

// # include <stdio.h>
// int main() {

//     int a , b , c;
//     a = 5 , b = 6 , c = a*b ;
//     printf("The area of the rectangle is - %d" , c);

//     return 0;

// }


// b. - 

// # include <stdio.h>
// int main() {

//     int a , b , c;
//     printf("Enter the value of length - ");
//     scanf("%d" , &a);

//     printf("Enter the value of breadth - ");
//     scanf("%d" , &b);

//     c = a * b;
//     printf("The area of the rectangle is - %d" , c);

//     return 0;

// }

// ---------------------------------------------------------------------------------------------------------------------------------------

// 2. Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height

// # include <stdio.h>

// int main() {

//     int r;
//     float pi = 3.14;
//     printf("Enter the the value of radius - ");
//     scanf("%d" , &r);
//     float area_circle = pi*r*r;
//     printf("The area of the circle is - %f\n\n" , area_circle);

//     int h;
//     printf("Enter the the value of height - ");
//     scanf("%d" , &h);
//     float volume_cylinder = pi*r*r*h;
//     printf("The volume of cylinder is - %f\n\n" , volume_cylinder);

//     return 0;
// }

// ---------------------------------------------------------------------------------------------------------------------------------------

// 3. Wriate a program to convert celcius to farenheit


//  # include <stdio.h>

// int main() {

//     float c , f;
//     printf("Enter the value of temperature in Celcius - ");
//     scanf("%f" , &c);

//     f = (c * (9.0/5.0)) + 32.0;
//     printf("The temperature is Farenheit is - %f" , f);

//     return 0;
// }

// ---------------------------------------------------------------------------------------------------------------------------------------

// 4. Write a program to calculate simple interest for a set of values representing principal , no of years , and r.o.i


// #include <stdio.h>

// int main() {
//     float p , t , r , si;

//     printf("\nEnter the value of Principal - ");
//     scanf("%f" , &p);

//      printf("Enter the N.O of months - ");
//     scanf("%f" , &t);

//      printf("Enter the value of Rate of interest - ");
//     scanf("%f" , &r);

//     si = (p*r*t)/(100*12);
//     printf("\nThe value of Simple Interest is - %f" , si);

//     return 0;
// }

// ---------------------------------------------------------------------------------------------------------------------------------------
