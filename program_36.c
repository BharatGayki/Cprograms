#include<stdio.h>///



int main(){



int a1,a2,a3,sum;

printf("Enter the angles of triangles: ");

scanf("%d%d%d",&a1,&a2,&a3);



sum  = a1+a2+a3;

if(sum == 180)
{
    printf("The triangle is equilateral traiangle");
}

if(sum != 180)
{
    printf("The triangle is not equilateral traiangle");
}


return 0;
}