#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    for (int i=0; i<number; i++) {
        std::cout << "\n";
        for (int j=0; j<number; j++) {
            std::cout << "*";
        }
    }
}
