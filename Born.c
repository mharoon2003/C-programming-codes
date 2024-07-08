//5_ printing the year of Chiana
    
 #include <stdio.h>
int main(){

    int year;
    printf("Enter a year to know which year is that in China years \n");
    scanf("%d" , &year);
    int num = year%12;
    switch (num){
        case 1:
            printf("monkey");
            break;
        case 2:
            printf("rooster");
            break;
        case 3:
            printf("dog");
            break;
        case 4:
            printf("pig");
            break;
        case 5:
            printf("rat");
            break;
        case 6:
            printf("ox");
            break;
        case 7:
            printf("tiger");
            break;
        case 8:
            printf("rabbit");
            break;
        case 9:
            printf("dragon");
            break;
        case 10:
            printf("snake");
            break;
        case 11:
            printf("horse");
            break;
        case 12:
            printf("sheep");
            break;
        default :
            printf("invalid value");
            break;
    }
}