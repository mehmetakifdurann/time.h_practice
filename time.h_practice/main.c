#include <stdio.h>
#include <time.h>


 /*
 
int main(){
    
    time_t second; // epoch time, UNIX epoch. In C language we show this with time_t. (With this line we define second as the total second value from January 1, 1970 00:00).
    
    second = time (NULL);
     
    printf("The second value of the time from 1 January 1970 is : %ld \n", second); //this will print the total seconds from January 1, 1970
    
    printf("The total day value of the time from January 1, 1970 is : %ld\n", second/3600);
    
    
    return 0;
}

  
  
 */

 /* int main(){  // THIS BLOCK OF CODE WILL PRINT THE DATE YOU RUN THIS PROGRAM.
  
  time_t todaysDate;

  todaysDate = time(NULL);
  
  printf(ctime(&todaysDate));
  

  return 0;
  
}
*/



// difftime() function

/*
 difftime() function is, the time between the work has started and finished. This function will print as second.
 */


/* int main(void){
 
 time_t startingTime, finishingTime;
 
 volatile long unsigned counter;
 
 startingTime = time(NULL);
 
 for (counter = 0; counter < 1020000000; counter ++);
    

 
 finishingTime = time(NULL);
 
 printf("The time goes  for this loop is :  %f seconds \n", difftime(finishingTime, startingTime));
 
 
 
 return 0;
}
 This block of code will print the time that an operation to take
  
 int main(void){
 
 time_t startingTime, finishingTime;
 
 volatile long unsigned counter;
 
 startingTime = time(NULL);
 
 for (counter = 0; counter < 1020000000; counter ++);
    

 
 finishingTime = time(NULL);
 
 printf("The time goes  for this loop is :  %f seconds \n", difftime(finishingTime, startingTime));
 
 
 
 return 0;
}
*/



    
    
