// This program produces a sales report for DLC, Inc.
#include <iostream>
#include <iomanip>
using namespace std;

// Product Structure
struct Product {
   int id;
   int units_sold;
   double prices;
   double sales;
};

// Function prototypes
void calcSales(Product[], int);
void showOrder(Product[], int);
void dualSort(Product[], int);
void showTotals(Product[], int);

// NUM_PRODS is the number of products produced.
const int NUM_PRODS = 9;

int main()
{
   /***************************************************************
    *                DEPRECIATED CODE
    * // Array with product ID numbers
    * int id[NUM_PRODS] = {914, 915, 916, 917, 918, 919, 920,
    *                      921, 922};
    * 
    * // Array with number of units sold for each product
    * int units[NUM_PRODS] = {842, 416, 127, 514, 437, 269, 97,
    *                         492, 212};
    * 
    * // Array with product prices
    * double prices[NUM_PRODS] = {12.95, 14.95, 18.95, 16.95, 21.95,
    *                            31.95, 14.95, 14.95, 16.95};
    * 
    * // Array to hold the computed sales amounts
    * double sales[NUM_PRODS];
    * 
    * **************************************************************/


   //Array of Products created with data inserted
   //sales will be computed later
   Product products[NUM_PRODS] = 
   {
      {914, 842, 12.95},
      {915, 416, 14.95},
      {916, 127, 18.95},
      {917, 514, 16.95},
      {918, 437, 21.95},
      {919, 269, 31.95},
      {920,  97, 14.95},
      {921, 492, 14.96},
      {922, 212, 16.95}
    };

   // Calculate each product's sales.
   calcSales(products, NUM_PRODS);

   // Sort the elements in the sales array in descending
   // order and shuffle the ID numbers in the id array to
   // keep them in parallel.
   dualSort(products, NUM_PRODS);

   // Set the numeric output formatting.
   cout << setprecision(2) << fixed << showpoint;

   // Display the products and sales amounts.
   showOrder(products, NUM_PRODS);

   // Display total units sold and total sales.
   showTotals(products, NUM_PRODS);
   return 0;
}

//****************************************************************
// Definition of calcSales. Accepts units, prices, and sales     *
// arrays as arguments. The size of these arrays is passed       *
// into the num parameter. This function calculates each         *
// product's sales by multiplying its units sold by each unit's  *
// price. The result is stored in the sales array.               *
//****************************************************************

void calcSales(Product *products, int num)
{
   for (int index = 0; index < num; index++)
      products[index].sales = products[index].units_sold * products[index].prices;
}

//***************************************************************
// Definition of function dualSort. Accepts id and sales arrays *
// as arguments. The size of these arrays is passed into size.  *
// This function performs a descending order selection sort on  *
// the sales array. The elements of the id array are exchanged  *
// identically as those of the sales array. size is the number  *
// of elements in each array.                                   *
//***************************************************************

void dualSort(Product *products, int size)
{
   int startScan, maxIndex, tempid;
   double maxValue;

   for (startScan = 0; startScan < (size - 1); startScan++)
   {
      maxIndex = startScan;
      maxValue = products[startScan].sales;
      tempid = products[startScan].id;
      for(int index = startScan + 1; index < size; index++)
      {
         if (products[index].sales > maxValue)
         {
            maxValue = products[index].sales;
            tempid = products[index].id;
            maxIndex = index;
         }
      }
     products[maxIndex].sales = products[startScan].sales;
     products[maxIndex].id = products[startScan].id;
     products[startScan].sales = maxValue;
     products[startScan].id = tempid;
   }
}

//****************************************************************
// Definition of showOrder function. Accepts sales and id arrays *
// as arguments. The size of these arrays is passed into num.    *
// The function first displays a heading, then the sorted list   *
// of product numbers and sales.                                 *
//****************************************************************

void showOrder(Product *products, int num)
{
   cout << "Product Number\tSales\n";
   cout << "----------------------------------\n";
   for (int index = 0; index < num; index++)
   {
      cout << products[index].id << "\t\t$";
      cout << setw(8) << products[index].sales << endl;
   }
   cout << endl;
}

//*****************************************************************
// Definition of showTotals function. Accepts sales and id arrays *
// as arguments. The size of these arrays is passed into num.     *
// The function first calculates the total units (of all          *
// products) sold and the total sales. It then displays these     *
// amounts.                                                       *
//*****************************************************************

void showTotals(Product *products, int num)
{
   int totalUnits = 0;
   double totalSales = 0.0;

   for (int index = 0; index < num; index++)
   {
      totalUnits += products[index].units_sold;
      totalSales += products[index].sales;
   }
   cout << "Total units Sold:  " << totalUnits << endl;
   cout << "Total sales:      $" << totalSales << endl;
}
