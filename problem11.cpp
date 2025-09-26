#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    int input;
    float sum = 0;

    cout << "Enter numbers (0 to stop): " << endl;

    while (true) {
        cin >> input;
        if (input == 0) break;
        numbers.push_back(input);
    }

    int positives = 0;
    int negatives = 0;

    for (int i=0; i<numbers.size(); i++) {
        if (numbers[i] > 0) {
            positives++;
            sum += numbers[i];
        }
        else if (numbers[i] < 0)
            negatives++;
        sum += numbers[i];
    }

    cout << "Number of positive numbers: " << positives << endl;
    cout << "Number of negative numbers: " << negatives << endl;
    cout << "Number of total numbers: " << numbers.size() << endl;
    cout << "The average: " << sum/numbers.size() << endl;

    return 0;
}
