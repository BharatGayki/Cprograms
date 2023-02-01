#include<stdio.h>

int main()
{
    int a[6][6] = {{0}};
    int i,j,s,c=0,ch;

    printf(" YOUR OPTIONS \n");
    printf("1 - Upper trianglar Matrix\n2 - Lower triangular Matrix \n");
    printf("Provide your choice : ");

    scanf("%d",&ch);


    printf("\n");

    if(ch == 2) {
        printf(" Lower trianglar Matrix is \n");

        for(i=0; i<=4; i++) {

            for(j=0; j<=i; j++) {


                a[i][j] = 1;

            }

        }

    }

    if(ch == 1)
    {
        printf("Upper trianglar Matrix is \n");
 //   printf("\n");
        for(i=0; i<=4; i++) {

            for(j=0; j<=i; j++) {


                a[j][i] = 1;

            }

        }

    }

    printf("\n");
    
    for(i=0; i<=4; i++) {

        for(j=0; j<=4; j++) {

         
            printf("%d ",a[i][j]);


        }
        printf("\n");
    }



    // printf("Hello world!");
    return 0;
}