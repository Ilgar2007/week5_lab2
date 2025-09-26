#include <iostream>
using namespace std;

int main() {
   int n;
   cout << "Enter integer  number: ";
   cin >> n;

   int i = 2;

   while (n > 1) {
      if (n % i == 0) {
         cout << i << " ";
         n = n / i;
      } else {
         i++;
      }
   }

   return 0;
}