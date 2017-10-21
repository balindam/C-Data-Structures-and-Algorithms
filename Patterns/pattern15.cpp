/*
             1
             22
             333
             4444
             55555
-------------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>         //including standard input amd output streams
#include<stdlib.h>        //including stadard library stream
int main()                //main function declaration
{
int i,j;                  //declaring variables for loops
for(i=1;i<=5;i++)         //loop for rows
{
for(j=1;j<=i;j++)         //loop for columns
{
printf("%d",i);          //printing pattern
}
printf("\n");            //shifting cursor to new line
}
return 0;                //returning to main function
}                        //closing main function
