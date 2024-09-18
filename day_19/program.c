// Write a C program to accept id from user and display department.

// Id: 11 to 15 is Software department

//   16 to 20 is Developer department

  //21 to 23 is Management department
// #include<stdio.h>
// int main()
// {
//     int id;
//     printf("Enter the id :");
//     scanf("%d",&id);
//     switch (id)
//     {
//     case 11:case 12:case 13:case 14:case 15:printf(" software department ");
//         break;
//     case 16:case 17:case 18:case 19:case 20:printf(" Developer department ");
//         break;
//     case 21:case 22:case 23:printf(" Management department ");
//         break;
//     default:
//     printf("enter valid id :");
//         break;
//     }
// }
// *******************************************************************************************************************
// 2.Write a C program that will ask for a person’s name and his/her game score. Then it will ask for a second person’s name and score. The program will print the winner’s name and also print by how many 

// points that person won by comparing the scores. Develop this program by using switch case.
// #include<stdio.h>
// int main()
// {
//     int score1, score2;
//     char name1[20],name2[20];
//     printf("enter your name :");
//     scanf("%s",name1);
//     printf("enter score :");
//     scanf("%d",&score1);
//      printf("enter your name :");
//     scanf("%s",name2);
//     printf("enter score :");
//     scanf("%d",&score2);
//    switch (score1>score2)
//    {
//    case 1:
//     printf("%s won with %d points",name1,score1-score2);
//     break;
//        case 0:
//        {
//         switch(score1==score2)
//         {
//             case 1: printf("Both are Equal...");break;
//             case 2:printf("%s won with %d points",name2,score2-score1);break;
    
//         }
//        }
//     break;
   
   
//    }
// }
// *******************************************************************************************************************
// #include<stdio.h>
// int main()
// {
//     float b;
//     char c;
//    int balance;

//    printf("Enter the initial Balance:");
//    scanf("%d",&balance);
//    if((balance<=0))
//    {
//     printf("Ammount can not be stored");
//    }
//    else if(balance<2000)
//    {
//     printf("The minumum balance is 2000");
//    }
//    else
//    {
//     printf("Choose the Operation W/withdraw or D/Deposite:");
//     scanf(" %c",&c);
//    switch(c)
//    {
//     case 'd':case 'D':
//     {
//         printf("Enter the Ammout to deposite:");
//         scanf("%f",&b);
//         if(b<=0)
//         {
//             printf("This amount is not stored..");
//         }
//         else 
//         {
//             balance+=b;
//             printf("Deposite successfully...");
//             printf("total amount is :%.2f",(float)balance);
//         }
//     }
//     break;
//     case 'w':case 'W':
//     {
//         printf("Enter the Ammount to Withdraw");
//         scanf("%f",&b);
//         if(b>balance&&(balance-b>=2000))
//         {
//             printf("Insufficient funds..");
//         }
//         else{
//             balance-=b;
//             printf("Withdraw is successfulll..");
//             printf("total amount is :%.2f",(float)balance);

//         }
//     }
//     break;
//     default: printf("Invalid input operations");
//    }
//    }
// }
// ***************************************************************************************************************
// Write a C program to take user Id as 1001 and Pasword as 1010. Ask the user to enter his id, if the id is valid 
// then ask the user to enter his password ,if the password is correct then print the name of the user, otherwise 
// the program will print incorrect Passoword and if the Id doesnot exits, the program will print Incorrect Id.
// develop this program by using Switch case. 

#include<stdio.h>
int main()
{
int id;
int pass;
printf("enter the id");
scanf("%d",&id);
switch (id)
{
case 1001:
    {
     printf("enter the passward :");
     scanf("%d",&pass);
     switch (pass)
     {
     case 1010:
        {
         printf("Wellcome Rohidas Alse ");
        break;
        }
     
     default:  printf("Enter valid passward");
        break;
     }
    break;
    }

default:
printf("enter valid id :");
    break;
}
}
