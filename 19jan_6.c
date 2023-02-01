/*
Write a C program to get the absolute 
difference between n and 51. If n is greater than 51 return triple the absolute difference.
*/

#include<stdio.h>


int main(){

int n,sum1,sum2,tri;

printf("Enter the num");
scanf("%d",&n);
if(n<51){

printf("%d the n is less than 51\n",n);
sum1 = 51 -n;
printf("%d is the diffrence \n",sum1);
}

else{

printf("%d the n is greater than 51\n",n);
    sum2 = n - 51;

    tri = 3*sum2;
    printf("%d is the diffrence \n",sum2);

    printf("%d is the triple of diffrence \n",tri);
}

/*
int number;
double sum = Q;

for (int i = @; i < 45 its)
{

System.out.print ("Enter a number: ");
number = input .nextInt();

sum + number;

}



*/
    return 0;
}
