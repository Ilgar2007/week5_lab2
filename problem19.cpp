#include <iostream>
using namespace std;


int main() {
   int n;
   cout <<"Enter a number : "<<endl;
   cin>>n;
   int num = n;
   int dec_value = 0;

   int base = 1;

   int temp = num;
   while (temp) {
      int last_digit = temp % 10;
      temp = temp / 10;
      dec_value += last_digit * base;
      base = base * 2;
   }
   cout << dec_value << endl;
}

