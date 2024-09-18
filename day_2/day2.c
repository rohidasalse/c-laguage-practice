// 1.  write a program to find the next multiple of 10 of a given two digit number, if the given numbers last digit is less than 5 then
//        find the previous multiple of 10 and id the given numbers last digit is greater than or equal to 5 then find the next multiple of 10
// #include <stdio.h>

// int main()
// {
// int n;
// printf("enter the value of a: ");
// scanf("%d",&n);

//     ((n%10)<5) && (printf("%d",(n/10)*10)) || (printf("%d",((n/10)+1)*10));
// }

// **********************************************************************************************************************************

// 2.Reverse a number
// write a program to reverse 3 digit number without using any loop

#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of a: ");
    scanf("%d", &n);
    printf("%d",(n%10));
    printf("%d",((n/10)%10));
    printf("%d",((n/10)/10));
}
// ************************************************************************************************************************************

// 3.a shop keeper buys a TV set for 3500 and sells it at a profit fof 27% .
// Apart form this a VAT of 12.7% and Services Charge is 3.87% is charged.
// write a c program fo display total selling price profit along with vat and servece charge.

// #include<stdio.h>
// int main()
// {
// float tvp=3500,profit,selp,vat,servicecharge,total;
// profit=(tvp*27)/100;
// selp=profit+tvp;
// vat=(((selp*12.7)/100)-1);
// servicecharge=(selp*3.87)/100;
// total=selp+vat+servicecharge;
// printf("tv price : %f \n",tvp);
// printf("profit price : %f \n",profit);
// printf("selp price : %f \n",selp);
// printf("vat price : %f \n",vat);
// printf("servicecharge price : %f \n",servicecharge);
// printf("total price : %f \n",total);

// }
// ****************************************************************************************************************************************
// 4.find the area 
// write a c program to calculate and print the area of a squar and rectangle
// #include<stdio.h>
// int main()
// {
//     float l,b;
//     float areaofquare,arearectangle;
//     printf("Enter the value of l and b :");
//     scanf("%f%f",&l,&b);
//     areaofquare=b*b;
//     arearectangle=(l*b);
//     printf("\narea of square : %f\n",areaofquare);
//      printf("\narea of rectangle : %f\n",arearectangle);
    
    

// }