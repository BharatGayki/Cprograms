#include<stdio.h>

int main(){

char alpha;

fflush(stdin);
printf("Enter the alphabet :");
scanf("%c",&alpha);

if(alpha>='A'&& alpha<='Z')
{
    alpha = alpha+32;
    printf("\nthe swap is : %c",alpha);
}
if(alpha>='a'&& alpha<='z')
{
    alpha = alpha-32;
    printf("the swap is : %c",alpha);
}



    return 0;
}