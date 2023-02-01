///Jai Shree Ram
#include<stdio.h>
#include<process.h>
int main()
{

int pin,newpin,uchoice;
long accbal,num,widamt;


printf("Enter Initial Amount Balance:");
scanf("%ld",&accbal);

printf("Enter 4 digit pin No:");
scanf("%d",&pin);

do
{
   printf("Select An Option:\n");
printf("1 - For Deposite\n");
printf("2 - For Cash Withdrawl\n");
printf("3 - For Balance Enquiry\n");
printf("4 - For Pin Change\n");
printf("5 - Exit\n");

printf("Provide Ur Choice:");
scanf("%d",&uchoice);

switch(uchoice)
{

case 1: 

 //////num  = deposite amt
           printf("Enter Amt to deposite");
           scanf("%ld",&num);
           accbal = accbal+num;
           printf("The Total Amt is %ld",accbal);

           break;

case 2:

 /////// For Cash Withdrawl
         
         printf("Enter ur pin");
         scanf("%d",&newpin);

         if(newpin==pin)
        {
          printf("Enter amt to Withdrawl:");
          scanf("%ld",&widamt);

          if(widamt<accbal)
          {
              printf("Amt withdraw is : %ld",widamt) ;
               accbal = accbal-widamt;
            printf("The Total Balance is : %ld",  accbal ); 
          }///if(widamt<accbal)
          else
          {
            printf("Ensufficient amt to withdraw");
          }
          
        }//if(newpin==pin)

             else
             {
              printf("----------Incorrect pin try again--------");
             }

             break;
}

 
} while(1);

    return 0;
}

///sankat_mochan