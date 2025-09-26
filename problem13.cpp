#include <iostream>
#include <ostream>
#include <stdio.h>
using namespace std;
int main() {
    int n, i, j;

    printf("Enter the height of the triangle: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {       // For each row from 1 to n
        for (j = 1; j <= i; j++) {   // Print i stars in row i
            cout<<"*";
        }
        cout<<"\n"<<endl;                // New line after each row
    }

    return 0;
}
