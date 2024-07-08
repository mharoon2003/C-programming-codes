// 3_ Calculating the energy need for heating the water

#include <stdio.h>
int main(){
    double wieght , itemp , ftemp ;
    
    printf("Enter the water weght in kilograms  : ");
    scanf("%lf" , &wieght);
    
    printf("Enter the initial Temperature in Celcious   :");
    scanf("%lf" , &itemp);
    
    printf("Enter the final Temperature in Celcious  :");
    scanf("%lf" , &ftemp);
    
    double energy = wieght*(ftemp - itemp)*4184;
    
    printf (" The energy need for %lf kilogram water in %lf final temprature and %lf initial temprature is equal to %lf",wieght ,ftemp ,itemp ,energy);
}
    