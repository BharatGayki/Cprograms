#include<stdio.h>

int main()
{
int a[20],lar_value,i;
printf("Enter 20 lements Of array\n");
for(i=0;i<=19;i++)
{
    scanf("%d\n",&a[i]);
}

lar_value = a[0];

printf("Elements of array are\n");
for(i=0;i<=19;i++)
{
    printf("%d\n",a[i]);
}

for(i=1;i<=19;i++)
{
    if(a[i]>lar_value)
    {
        lar_value = a[i];
    }
}
printf("Largest Value is : %d\n",lar_value);





    return 0;
}