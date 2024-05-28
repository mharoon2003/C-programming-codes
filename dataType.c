// dataTypes

#include <stdio.h>
#include <stdbool.h>// this is used to include the boolean data type


    int main(){
        char a = 'S';// a character

        char c = 87;    /* we can print this as a character(ASCII) and as a digit (Binary)   %c format specifier   signed value from (-128 to 127) */

        unsigned char l = 144 ;// unsigned char from (0 to 255) %c 


        char name [] = "hamid"; /*%s is used as foramat specifier
        colection of characters as array
        */

       bool s = true;  // this is boolean datatype use 1 Byte %d (format specifier)

       short h = 3453; // uses 2 Bytes (-32768 to +32767)  %d 

        unsigned short H = 6477; // from 0 to 65....   %d
       

       int k = 4353325 ; // uses 4 Bytes (- )  %d 

       unsigned int kk = 43533257454 ; // uses 4 Bytes (- )  %u 

       // floating types 

       float v = 234213.987; // uses 32 bits floating types single percesion   %f 

       double m = 432356322.098683; // uses 64 bits double percesion     %lf

        
         long long int big = 34782394865;// use 8 Bytes 

        printf("The char a  value is : %c \n===============\n" ,a);// prints the value of variable a 

        printf("The char a  value is : %d \n===============\n" ,a);// prints the binary value of variable a 

        printf("The char c  value is : %d \n===============\n" ,c);//prints 87
        printf("The char c  value is : %c \n===============\n" ,c);//prints w the ASCII of 87 

        printf("The char l  value is : %d more than 127 \n===============\n" ,l);// prints more than 127 

        printf("my name is  : %s \n===============\n" ,name);// prints the value of variable name

        printf("your code is : %d \n===============\n" ,s);// prints prints true or false

        printf("the value of h variable with short data type is : %d \n===============\n" ,h);// prints the value of h 

        printf("the value of h variable with unsigned  short data type is : %d \n===============\n" ,H);// prints unsigned short value

       
        printf("the value of k vatiable with signed  int data type is : %d \n===============\n" ,k);// prints signed int value

        printf("the value of kk variable with unsigned  int data type is : %d \n" ,kk);// prints unsigned int value

        
        printf("the value of v vatiable with float data type is : %f \n===============\n" ,v);// prints float data type  value

        printf("the value of m vatiable with double data type is : %lf \n===============\n" ,m);// prints double data type  value

        printf("the value of m vatiable with double data type is : %lld \n===============\n" ,big);// prints long long int data type  value
        


}