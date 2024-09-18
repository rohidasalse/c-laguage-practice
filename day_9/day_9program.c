// 1. cycle selling price calculator :

// rohan purchased an old cycle for rs 1200 and spent rs 250 on repairs,rs350 on coloring and added new accessories worth rs 500 . Rohan wants to make a profit of rs 1500 on selling the cycle
// write a c program that calculates and displas the selling price of the cycle based on the given information
// your program should :
// declare and initialize varibles for the following costs :
// cost price  : the initial cost of the cycle rs 1200
// repair cost : the cost of repairs rs 250
// coloring cost : the cost fo coloring rs 350
// accessories cost : the cost of new accessories rs 500
// calculate the total cos t by adding up all the costs 


// #include<stdio.h>
// int main()
// {
//     int cycost=1200,repair=250,coloring=350,accessories=500,profit=1500,totalcost;
//     printf("initial cost of cycle is : %d \n",cycost);
//     printf("repair cost of cycle is : %d \n",repair);
//     printf("cost of coloring  is : %d \n",coloring);
//     printf("cost of new accessories is : %d \n",accessories);
//     printf("desired profit is : %d \n",profit);
//     printf("total cost  : %d \n",(cycost+repair+coloring+accessories+profit));

// }

// ******************************************************************************************************************************************************************************************
// 2. Surface Area of cyclinder:
// write a program to find the surface area of a cyclider take the height and radius as a input form th e user by using scanf().
// the surface area of a cylinder can be calculated using the formula.

// input:
// Enter the radius of the cyclider :5
// Enter the height of the cylinder:10
// output:
// Radius :5.00
// Height :10.00
// Surface area :471.24;

// #include<stdio.h>
// #define pi 3.14
// int main()
// {
//     float r,h;
//     printf("Enter the radius of the cyclinder :");
//     scanf("%f",&r);
//     printf("Enter the height of the cyclinder :");
//     scanf("%f",&h);
//     printf("Radius :%.2f \n",r);
//     printf("height :%.2f \n",h);
//     printf("Surface area : %.2f",(2*pi*r*r)+(2*pi*r*h));


// }

// ******************************************************************************************************************************************************************************************
//  3.profit and loss calculator :
//  yor are tasked with creating a c program to calculate the profit and loss for  a given transaction using the following formulas . takes the cost price and selling price from the user by using scanf.
//  prodit (p)= sellling prive (sp)-cost price(cp)
//  loss (l)=cost price (cp)-selling price(sp)
//  loss percentage (lp)=loss *100/cost price
//  writ e a c program that prompts the user for the cost price  and the selling price of an item . calculate display the profit or loss as well as th e correspondig profit percentage or loss percentage based on the provided formulas.

//  input:
//  enter the cost price :
//  enter the selling price :
//  ooutput:
//  profit percentage:
//  or 
//  loss percentage:



 #include<stdio.h>
int main()
{
    int cost_p ,selling_p;
    printf("Enter the cost price :");
    scanf("%d",&cost_p);
    printf("Enter the selling price :");
    scanf("%d",&selling_p);
    (cost_p>selling_p) && printf("loss is :%d\n",(cost_p-selling_p)) && printf("percentage of loss :%d",(((cost_p-selling_p)*100)/cost_p)) || printf("profit is :%d\n",(selling_p-cost_p))&& printf("percentage of profit :%d\n",(((selling_p-cost_p)*100)/cost_p));
    
    
}




// ******************************************************************************************************************************************************************************************
