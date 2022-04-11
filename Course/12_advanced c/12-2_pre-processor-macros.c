# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main() {

    printf("FILE NAME is : %s\n",__FILE__);
    printf("DATE is : %s\n",__DATE__);
    printf("TIME is : %s\n",__TIME__);
    printf("LINE NO is : %d\n",__LINE__);
    printf("ANSI : %d\n",__STDC__);


    return 0;
}