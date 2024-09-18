// 1. calculate the volume of sphare
// input: 
// radius:5
// output:
// volume of sphare is :523.33
// #include<stdio.h>
// int main()
// {
//     const float pi=3.14;
//     int radius;
    
//     printf("enter the radius :");
//     scanf("%d",&radius);
//     printf("Volume of sphare is :%.2f",((4/3.0)*pi*radius*radius*radius));

// }
// *****************************************************************************************************************

// 2. input :
// How many cups of tea would you like to order? : 2

// How many cups of coffee would you like to order? : 1

// How many biscuits would you like to order? :1
// output:
// 2 cups of tea
// 1 cup of coffee
// 3 biscuits
// Total Bill Amount: ₹85

// Thank you 
// #include<stdio.h>
// int main()
// {
//     int tea_price=15,coffee_price=25,biscuit_price=10;
//     int tea_quantity,coffee_quantity,biscuit_quantity;
//     printf("how many cups of tea would you like to order :");
//     scanf("%d",&tea_quantity);
//    printf("How many cups of coffee would you like to order? : ");
//     scanf("%d",&coffee_quantity);
//     printf("How many biscuit would you like to order? : ");
//     scanf("%d",&biscuit_quantity);
//     printf("%d cups of tea\n",tea_quantity);
//     printf("%d cups of coffee\n",coffee_quantity);
//     printf("%d biscuit\n",biscuit_quantity);
//     printf("Total Bill Amount :%d\n",((tea_price*tea_quantity)+(coffee_price*coffee_quantity)+(biscuit_price*biscuit_quantity)));
//     printf("Thank you " );

// }
// ************************************************************************************************************************************************************************
// 3.costPrice: The initial cost of the cycle (Rs. 1200)

// repairCost: The cost of repairs (Rs. 250)

// coloringCost: The cost of coloring (Rs. 350)

// accessoriesCost: The cost of new accessories (Rs. 500)

// desiredProfit: The desired profit (Rs. 1500)

// Calculate the total cost by adding up all the costs.
// Calculate the selling price by adding the total cost and the desired profit.
// #include<stdio.h>
// int main(){
//     int costprice=1200,repair=250,coloringcost=350,accessoriesCost=500,desiredProfit=1500;
//     printf("costPrice=%d repairCost=%d coloringCost=%d accessoriesCost=%d desiredProfit=%d",costprice,repair,coloringcost,accessoriesCost,desiredProfit);
//     printf("\n total cost :%d",(costprice+repair+coloringcost+accessoriesCost+desiredProfit));
// }
// *******************************************************************************************************************************************************************************
#include<stdio.h>
int main()
{
    int a=10;
    char b="b";
    float c=10.3; 
    printf("%d\n%d",b,c);
}