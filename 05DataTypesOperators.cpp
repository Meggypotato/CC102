#include <iostream>

using namespace std;

int main()
{
  int fnum, snum, ewan, nyaha, wow,loveu, galing, lupet;
  cout << "Enter  first number ";
  cin >> fnum;
  cout << "enter second number ";
  cin >> snum;
  
  ewan = fnum + snum;
  nyaha = fnum - snum;
  wow = fnum/snum;
  loveu = fnum * snum;
  galing = wow * snum;
  lupet = fnum - galing;
  
  cout << "Sum " << ewan << endl;
  cout  << "Difference " << nyaha << endl;
  cout  << "Quotient " << wow << endl;
  cout  << "Product " << loveu << endl;
  cout  << "Remainder " << lupet << endl;
  
  return 0;


}
