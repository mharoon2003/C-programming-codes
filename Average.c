// finding the sum and average of the digits that has been entered

#include <stdio.h>

int
main ()
{
  int numbers;
  printf ("how many numbers you wanna enter and enter -1 to know average \n");
  scanf ("%d", &numbers);

  int sum = 0;
  double average = 0;
  int num;
  int i = 1;
  while (i <= (numbers+1))
	{
	  printf ("Enter the  %d \n", i);
	  scanf ("%d", &num);
	   int x = (i-1);
	  i++;
	 

	  if (num != -1)
		{
		  sum += num;
		  average = sum / numbers;
		}

	  else
		{
		  average = sum / x;
		  printf("%d \n",x);
		  break;
		  
		}
	}

  if (num == -1)
	{
	  //printf("The sum of numbers you entered is %d",sum);

	  printf ("The average of numbers you entered is %lf", average);


	}
  else
	{

	  printf ("The sum of numbers you entered is %d", sum);

	}

  return 0;
}