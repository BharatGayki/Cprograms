#include <stdio.h>

int main()
{
  int day;

  int fine;

printf("Enter num of days:");
scanf("%d",&day);

  if(day>=1 && day<=8)
  {
      fine = day*1;
      printf("The fine is %d",fine );
  }
if(day>=9 && day<=13)
  {
      fine = day*2;
      printf("The fine is %d",fine );
  }
  if(day>=14 && day<=19)
  {
      fine = day*3;
      printf("The fine is %d",fine );
  }
  if(day>=20 && day<=30)
  {
      fine = day*5;
      printf("The fine is %d",fine );
  }
    if(day>=30)
  {
    
      printf("Membership is cancleed" );
  }
 
    return 0;
}


