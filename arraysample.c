#include<stdio.h>

int main()
{



int i,j;
int a[4][4] = {0};

{
        printf(" Lower trianglar Matrix is \n");

        for(i=0; i<=4; i++) {

            for(j=0; j<=i; j++) {


                a[i][j] = 1;

            }

        }

    }
     printf(" \n ");
    
    for(i=0; i<=4; i++) 
    {

        for(j=0; j<=4; j++) {

         
            printf("%d ",a[i][j]);


        }
        printf("\n");
    }


  return 0;

  }