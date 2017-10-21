/*program to print the following patterns-
12345
1234
123
12
1
------------------------------------------------------------------------------*/
#include <stdio.h>

int main()
{
    int i, j;                //initializing the variable for rows and columns
    for(i=5;i>=1;i--)        //loop for rows
    {
        for(j=1;j<=i;j++)    //loop for columns
        {
            printf("%d",j);  //printing the number
        }
        printf("\n");       //shfting the cursor to next line
    }

    return 0;
}
