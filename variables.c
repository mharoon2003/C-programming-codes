#include <stdio.h>

int main(){

    /*variable = variables like boxes that we store values in them ,variables   allocated space in memory to store a value. and by variables name we can acces the stored vlaue 
    */
     
    int a;  /*declaration : it allocate a sapce in computer,s memory */

    a = 12; /* initialization: we store a value in the sapce that have been allocated before */

    int c = 34; //declaration and initialization 

    int age = 21;
    float average= 99.6;
    char grade = 'A'; // character
    char name[]= "Mohammad"; /* we dont have String data type itself in C programming language by making aray of character data type we can use them.  */

    // printing the values of variables 
    printf("I am %d years old\n",age );
    printf("Hello %s \n", name);
    printf("Your grade is %c\n", grade);
    printf("Your average is %f \n",average);


  return 0;

}