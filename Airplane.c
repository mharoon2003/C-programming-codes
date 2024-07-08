// 4_calculating the at least space need for air plane 

#include <stdio.h>
int main(){

    int speed ;
    int accelrate = 10;
    printf("Enter the speed of air plane in meters in one secound \n ");
    scanf("%d" ,&speed);
    float min_distance= (speed*speed)/ (2*accelrate);
    double min_disk=min_distance/1000;
    printf("the minium distace need for the air plane that has %d m/s speed is %lf kilometers distance" , speed ,min_disk);
}