#include <iostream>

using namespace std;

int main ()
{
   double sugarPriceUSD = 0, ricePricePound = 0, sardinesPricePound = 0, coffeePriceUSD = 0, milkPriceUSD = 0;
   double sugarQty = 0, riceQty = 0, sardinesQty = 0, coffeeQty = 0, milkQty = 0; 
   double sugarPriceQty = 0, ricePriceQty = 0, sardinesPriceQty = 0,  coffeePriceQty = 0, milkPriceQty;
   double usdToPhp = 54.6, poundToPhp = 45;
   double sugarUSDToPhp = 0, ricePoundToPhp = 0, sardinesPoundToPhp = 0, coffeeUSDToPhp = 0, milkUSDToPhp = 0, totalCostPhp = 0;
   double sugarPhp = 0, ricePhp = 0, sardinesPhp = 0, coffeePhp = 0, milkPhp = 0;
   
   cout << "Enter The Price for Sugar in USD:\t\t\t ";
   cin >> sugarPriceUSD;
   cout << "Enter The Price for Rice in Pound:\t\t\t ";
   cin >> ricePricePound;
   cout << "Enter The Price for Sardines in Pound:\t\t\t ";
   cin >> sardinesPricePound;
   cout << "Enter The Price for coffee in USD:\t\t\t ";
   cin >> coffeePriceUSD;
   cout << "Enter The Price for coffee in USD:\t\t\t ";
   cin >> milkPriceUSD;
   cout << endl;
   cout << "Enter the Qty in Sugar:\t\t\t\t\t ";
   cin >> sugarQty;
   cout << "Enter the Qty in Rice:\t\t\t\t\t ";
   cin >> riceQty;
   cout << "Enter the Qty in Sardines:\t\t\t\t ";
   cin >> sardinesQty;
   cout << "Enter the Qty in coffee:\t\t\t\t ";
   cin >> coffeeQty;
   cout << "Enter the Qty in milk:\t\t\t\t\t ";
   cin >> milkQty; 
   
   sugarPhp = sugarPriceUSD * usdToPhp;
   ricePhp = ricePricePound * poundToPhp;
   sardinesPhp = sardinesPricePound * poundToPhp;
   coffeePhp = coffeePriceUSD * usdToPhp;
   milkPhp = milkPriceUSD * usdToPhp;
   
   sugarPriceQty = sugarPriceUSD * sugarQty;
   ricePriceQty = ricePricePound * riceQty;
   sardinesPriceQty = sardinesPricePound * sardinesQty;
   coffeePriceQty = coffeePriceUSD * coffeeQty;
   milkPriceQty = milkPriceUSD * milkQty;
   
   sugarUSDToPhp = sugarPriceQty * usdToPhp;
   ricePoundToPhp = ricePriceQty * poundToPhp;
   sardinesPoundToPhp = sardinesPriceQty * poundToPhp;
   coffeeUSDToPhp = coffeePriceQty * usdToPhp;
   milkUSDToPhp = milkPriceQty * usdToPhp;
   totalCostPhp = sugarUSDToPhp + ricePoundToPhp + sardinesPoundToPhp + coffeeUSDToPhp + milkUSDToPhp;
   cout << endl;
   cout << "Sugar\t| Qty:\t " << sugarQty << " | Php " << sugarPhp << endl;
   cout << "Rice\t| Qty:\t " << riceQty << " | Php " << ricePhp << endl;
   cout << "Sardines| Qty:\t " << sardinesQty << " | Php " << sardinesPhp << endl;
   cout << "Coffee \t| Qty:\t " << coffeeQty << " | Php " << coffeePhp << endl;
   cout << "Milk  \t| Qty:\t " << milkQty << " | Php " << milkPhp << endl;
   cout << endl;
   cout << "Total cost of Sugar in Php\t " << sugarUSDToPhp << endl;
   cout << "Total cost of Rice in Php\t " << ricePoundToPhp << endl;
   cout << "Total cost of Sardines in Php\t " << sardinesPoundToPhp << endl; 
   cout << "Total cost of Coffee in Php\t " << coffeeUSDToPhp << endl;   
   cout << "Total cost of Milk in Php\t " << milkUSDToPhp << endl; 
   cout << endl;
   cout << "Total amount to paid \t" << totalCostPhp << " Php";
   
   return 0;
   
}
