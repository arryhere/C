// # include <stdio.h>
// # include <string.h>
// # include <stdlib.h>
// # include <time.h>

// int game (char user , char comp) {
//     if (user == comp) {
//         return 0;
//     }
//     else if (user == 'r') {
//         if (comp == 'p') {
//             return -1;
//         }
//         else if (comp == 's') {
//             return 1;
//         }
//     }
//     else if (user == 'p') {
//         if (comp == 's') {
//             return -1;
//         }
//         else if (comp == 'r') {
//             return 1;
//         }
//     }
//     else if (user == 's') {
//         if (comp == 'r') {
//             return -1;
//         }
//         else if (comp == 'p') {
//             return 1;
//         }
//     }
// }


// int main() {

//     int randno , upper , lower;
//     lower = 1;
//     upper = 3;
//     srand(time(NULL));
//     randno = (rand() % (upper - lower + 1)) + lower ;
//     printf("%d", randno);

//     char user;
//     char comp;

//     printf("\n---------- Rock Paper Scissor Game ----------\n\n");
//     printf("Enter 'r' for Rock -- 'p' for Paper -- 's' for Scissor\n");

//     if (randno == 1) {
//         comp = 'r';
//     }
//     else if (randno == 2) {
//         comp = 'p';
//     }
//     else if (randno == 3) {
//         comp = 's';
//     }
    
//     printf("Enter your choice : ");
//     scanf("%c" , &user);

//     int result = game(user , comp);
    
//     printf("The computer choose : %c and the user choose : %c\n",comp,user);
//     if (result == 0) {
//         printf("Its a TIE !");
//     }
//     else if (result == 1) {
//         printf("Congrats, you WON !");
//     }
//     else if (result == -1) {
//         printf("You LOST, try again !");
//     }

//     return 0;
// }

// -------------------------------------------------------------------------------------------------------------------------------------------