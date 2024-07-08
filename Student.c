
//6_   printing and getting students name

#include <stdio.h>
int main(){
    
    int number ;
    
    printf("how many data you wanna enter\n");
    scanf("%d",&number);
    int x = number;
    int point;
    int heighest;
    int y=1;
    int i = 1;
   
    while(i<=x){
        char name[18];
        printf("Enter the students name %d \n",i);
        scanf("%s",&name);
        printf("Enter the students point %d\n",i);
        scanf("%d",&point);
        if(i==1){
        heighest=point;
        }
        i++;
        
        }

        while (y<=x){
            if (heighest<point){
                heighest=point;
                y++;
            }
         break;
    }
    printf("The hieghest score is %d", heighest);
}
         
