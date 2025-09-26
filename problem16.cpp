#include <iostream>
using namespace std;
int main() {
   int number;
   double sum = 0;
   cout << "Enter a number: ";
   cin >> number;
   for (int i = 1; i <= number; i++) {
      sum = sum + 1.0 / i;   
      cout << "1/" << i << " + ";
   }
   cout << "\b\b " << "= " << sum << endl;
}

