// Finding the minimum and maximum of entered numbers

#include <stdio.h>

int main ()
{

    int numbers;
    printf ("how many numbers you wanna enter ===> \n");
    scanf ("%d", &numbers);

    int maximum ;
    int minimum ;
    int numer1;
    int i = 1;
    while (i <= numbers ) {
        
        printf ("Enter the number %d \n", i);
        scanf ("%d", &numer1);
        i++;
        
        if(i==1) {
           minimum = numer1;
            maximum = numer1;
        }

        if (numer1 > maximum) {
            maximum = numer1;
        }
        if (numer1<minimum) {
            if(numer1 != -1){
            minimum = numer1;
            }else {
                break;
            }
        }

    }
    printf ("THe minimum number is %d and the maximum number is %d", minimum,maximum);

    return 0;
}