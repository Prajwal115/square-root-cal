#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
cout << "Square root calculator" << endl;
int a;
int output;

cout << "Enter your number" << endl;
cin >> a;
output = sqrt(a);
cout << "The square root of " << a << " is: " << output << endl;
return output;
}
