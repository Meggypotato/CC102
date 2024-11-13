#include <iostream>

using namespace std;

int main()
{
    int temp;
	cout << "Input the temparature: ";
	cin >> temp;
	if (temp<32){
	cout << "Bring heavy jacket";}
	   else if (temp==32&&50){
	   cout <<  "Bring light jacket";} 
	        else cout << "No jacket at all";
	        return 0;
}