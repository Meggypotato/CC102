#include <iostream>

using namespace std;

int main ()
{
   float sugarPriceUSD = 0, ricePricePound = 0, sardinesPricePound = 0, coffeePriceUSD = 0, milkPriceUSD = 0;
   float sugarQty = 0, riceQty = 0, sardinesQty = 0, coffeeQty = 0, milkQty = 0; 
   float sugarPriceQty = 0, ricePriceQty = 0, sardinesPriceQty = 0,  coffeePriceQty = 0, milkPriceQty;
   float usdToPhp = 54.6, poundToPhp = 45;
   float sugarUSDToPhp = 0, ricePoundToPhp = 0, sardinesPoundToPhp = 0, coffeeUSDToPhp = 0, milkUSDToPhp = 0, totalCostPhp = 0;
   float sugarPhp = 0, ricePhp = 0, sardinesPhp = 0, coffeePhp = 0, milkPhp = 0;
   
   cout << "Enter The Price for Sugar in USD: ";
   cin >> sugarPriceUSD;
   cout << "Enter The Price for Rice in Pound: ";
   cin >> ricePricePound;
   cout << "Enter The Price for Sardines in Pound: ";
   cin >> sardinesPricePound;
   cout << "Enter The Price for coffee in USD: ";
   cin >> coffeePriceUSD;
   cout << "Enter The Price for coffee in USD: ";
   cin >> milkPriceUSD;
   cout << endl;
   cout << "Enter the Qty in Sugar: ";
   cin >> sugarQty;
   cout << "Enter the Qty in Rice: ";
   cin >> riceQty;
   cout << "Enter the Qty in Sardines: ";
   cin >> sardinesQty;
   cout << "Enter the Qty in coffee: ";
   cin >> coffeeQty;
   cout << "Enter the Qty in milk: ";
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
   cout << "Sugar in Php: " << sugarQty << " Php " << sugarPhp << endl;
   cout << "Rice in Php: " << riceQty << " Php " << ricePhp << endl;
   cout << "Sardines in Php: " << sardinesQty << "Php" << sardinesPhp << endl;
   cout << "Coffee in Php: " << coffeeQty << "Php" << coffeePhp << endl;
   cout << "Milk in Php: " << milkQty << "Php" << milkPhp << endl;
   cout << endl;
   cout << "Total cost of Sugar in Php " << sugarUSDToPhp << endl;
   cout << "Total cost of Rice in Php " << ricePoundToPhp << endl;
   cout << "Total cost of Sardines in Php " << sardinesPoundToPhp << endl; 
   cout << "Total cost of Coffee in Php " << coffeeUSDToPhp << endl;   
   cout << "Total cost of Milk in Php " << milkUSDToPhp << endl; 
   cout << endl;
   cout << "Total amount to paid " << totalCostPhp;

   
   return 0;
   
}