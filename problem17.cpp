#include <iostream>
using namespace std;
int main() {
   int number;
   cout<<"Enter a number: "<<endl;
   cin>>number;
   int digit;
   int sum = 0;
   while (number > 0) {
      digit = number % 10;
      sum = sum + digit;
      number = number / 10;
   }
   cout << sum << endl;
   return 0;
}

