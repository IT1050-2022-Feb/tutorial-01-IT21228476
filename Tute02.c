

#include <stdio.h>

int main() {

  int dis;
  float amount;

  printf("Enter the Distance the van has travelled : ");
  scanf("%d",&dis);

  if(dis<30)
  {
    amount = dis * 50 ;
  }
    else if(dis>30)
      {
        amount = 30 * 50 +  (dis - 30)  *  40 ;
      }

  printf("Total Amount %.2f",amount);
  
  return 0;
}
