
//  7_   Finding factorial

#include <stdio.h>
int main(){
    int digit;
    printf("Enter the digit you wana know factorial of that\n");
    scanf("%d",&digit);
    int factorial=1;
    int number = digit;
    while (digit > 0){
        factorial*= digit;
        digit--;
    }
    printf("the factorial of %d is %d",number,factorial);
    
    return 0;
}

