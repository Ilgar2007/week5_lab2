#include <iostream>
using namespace std;

int main() {
    double rent;
    double increaseRate = 0.03; // 3%
    int years = 5;
    double total = 0;

    cout << "Enter the initial rent amount: ";
    cin >> rent;

    for (int year = 1; year <= years; year++) {
        rent = rent + rent * increaseRate;
        rent = rent + rent * increaseRate;
        cout << "Rent for year " << year << ": " << rent << endl;
        total = total + rent;
    }
    cout << "The total price is "<<total << endl;

    return 0;
}
