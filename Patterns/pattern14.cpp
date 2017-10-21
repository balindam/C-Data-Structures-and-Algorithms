/*
                                        1
                                        21
                                        321
                                        4321
                                        54321
-------------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>         //standard input output stream
#include<stdlib.h>        //stadard library included
int main()                //main function
{
int i,j;                 //declaring variables for loop
for(i=0;i<5;i++)         //loop for rows
{
for(j=i+1;j>=1;j--)      //loop for column
{
printf("%d",j);         //printing the pattern
}
printf("\n");           //shofting the cursor to next line
}
return 0;              //returning to main function
}                      //closing the main function
