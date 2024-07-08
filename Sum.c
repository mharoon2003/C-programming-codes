 //   8_  Sum of numbers

 #include <stdio.h>
int main(){
    int numbers;
    printf("how many numbers you wanna enter and enter -1 to know the sum of them \n");
    scanf("%d",&numbers);
       
        int sum=0;
        int num;
        int i= 1;
        while(i<=numbers){
        printf("Enter the  %d \n",i);
        scanf("%d",&num);
        if(num!=-1){
        sum += num;
        }else{
            break;
        }
        i++;
        }
        
          printf("The sum of numbers you entered is %d",sum);

          
}