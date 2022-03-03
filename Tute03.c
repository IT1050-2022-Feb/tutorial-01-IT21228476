

#include <stdio.h>
  int main() {


  int number , total = 0 , x;

  printf("Enter a number :");
  scanf("%d",&number);

  for(x = 1 ; x <= number ; x++)
  {
     total = total + x;  

  }

  printf("total is %d",total);

  return 0;
}

