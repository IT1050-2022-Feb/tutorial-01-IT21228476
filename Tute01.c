

#include <stdio.h>

int main() {

  int m1,m2;
  float avg;

  printf("Enter the subject 1 mark:");
  scanf("%d",&m1);

  printf("Enter the subject 2 mark:");
  scanf("%d",&m2);

  //calculation

  avg=(m1+m2)/2;

  printf("Average mark of two subjects :%.2f",avg);

  return 0;
}
     
