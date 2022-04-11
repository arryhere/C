// we will write a program that generates a random number and asks the player to guess it.
// if the players guess is higher than the actual nuumber the program displays - " lower number please ".
// similarly if the user guess is too low , the program prints "higher number please".
// when the user guesses the correct number the program displayus the number if guesses the player used to arrive at the numbers.



// # include <stdio.h>
// # include <stdlib.h>
// #include <time.h>

// int main() {
    
//     int number;
//     srand(time(0));
//     number = rand()%100 + 1;
//     // printf("The number is : %d\n" , number);

//     int guess;
//     int no_guesses = 1;
//     do {
//         printf("Guess the number between 1 - 100 : ");
//         scanf("%d" , &guess);
//         if (guess > number) {
//             printf("Lower number please !\n");
//         }
//         else if (guess < number) {
//             printf("Higher number please !\n");
//         }
//         else {
//             printf("Correct guess ! , n.o of attempts : %d\n" , no_guesses);
//         }
//         no_guesses++;

//     }while (guess != number);


// return 0;
// }



