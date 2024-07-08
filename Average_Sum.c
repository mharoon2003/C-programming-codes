
//This is a program that gets input from user until the 
//user enters the -1 if did so program will give the sum and average of 
// Numbers that user entered

#include <stdio.h>
#include <stdbool.h>//this is for decalaring a boolean type variable

int main() {
    // Write C code here
        bool isTrue = true;    //boolean type variable
   
        double sum=0;
		double average =  0;   //Declaring sum and average 
        int num;   //Declaring the variable we want input 
        int i= 1;    //variable of While loop

          while(isTrue){
             printf("Enter the  %d \n",i);
             scanf("%d",&num);   //gets the num input

              if (num== -1){     //if user entere -1 so the isTrue will be falls
           	    isTrue = false;
            	average = sum/(i-1);  //Because the -1 itself not counted 
            
            
           		 }else{
           		sum += num;    // In every itration number will added to sum
        		i++;}     // i increases one

        	}

	printf ("The average of numbers you entred is %lf \n ",average);
	printf("== == == == == == == == == == ===> \n");
    printf ("The sum of numbers you entred is %lf ",sum);
    return 0;
}
