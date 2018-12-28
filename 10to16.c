/**************************************************************************************************************************************************************
 * The goal of this program is to take a number in base 10 (as a string, of size less than uint64_t or equal to)
 * negative number are allowed as in the first character could be a '-', and you need to deal with that to print negative numbers.
 * The string "-", is valid and in our scheme is just the number 0.
 * The only three libraries allowed are stdio, stdint, stdlib
 * argv[1] = input
 *
 * After the assignment come up with two alternative schemes for packing strings and discuss in 1000 words the strengths and weaknesses of your approaches, vs
 * the current approach.
 * Be sure to cleanup the memory you use. (in other words leak checking is in the grading system.)
 *************************************************************************************************************************************************************/
// ok so i literally dont know whats going on i just found random stuff on the internet ill fix it tmrw ://
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
  //Ensure the input is exists.
      while(argv[i]!=NULL){
        printf("\n %s is argv %d ",argv[i],i);
            i++;
    }
    printf("\n");
  
  //Ensure the input is valid.
       scanf("%d", &menu);
     if( menu != 1) {
      printf("Invalid Entry!");
     } else {
      printf("Your Menu Option is: %d\n", menu);
     }
  
  //Parse the input
    int i;
    char num[256];
    printf ("Enter a number: ");
    gets(num);
    i = atoi (num);
    printf ("The value entered is %d.\n",i);
    return 0;
  
  
    const char *nptr = "1A2436";
    char* endptr;
    long int result = strtol(nptr, &endptr, 16);
    return 0;
  
  //Print the output
      printf("What am i doing with my life");
  
      int dec = 5;
      char str[] = "abc";
      char ch = 's';
      float pi = 3.14;
      printf("%d %s %f %c\n", dec, str, pi,  ch);
 
  //Return -1 if an error occured, printing the error.
  return -1;
  printf("put the error here somehow");
}
