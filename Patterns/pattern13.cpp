/*
                                             5
                                             45
                                             345
                                             2345
                                             12345
-----------------------------------------------------------------------------------------------------------------------------------------/*

#include<stdio.h>      //including standard input and output stream
#include<stdlib.h>     //including standard library files
int main()             //main function
{
  int i,j;             //initializing variables for loops
  for(i=0;i<5;i++)     //loop for rows
   {
   for(j=5-i;j<=5;j++) //loop for column
     {
     printf("%d",j);   //printing pattern
     }
   printf("\n");      //shifting the cursor to next line
  }
}                    //closing main function 
