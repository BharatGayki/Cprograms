#include<stdio.h>

int main(){


long bank_ac_no,ac_balance;

char ac_type;



printf("Enter bank acc no :");
scanf("%ld",&bank_ac_no);

printf("\nEnter acc bal :");
scanf("%ld",&ac_balance);

printf("\nEnter acc type :");
scanf("%c",&ac_type);


printf("Bank Acc No is : %ld",bank_ac_no);

printf("\nAcc Balance is : %ld",ac_balance);

printf("\nAcc Type is : %c",ac_type );


    return 0;
}