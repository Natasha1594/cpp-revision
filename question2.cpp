#include <iostream>

using namespace std;

int main() {
    int n;
    int stars = 0;

    // Prompt user for input
    cout << "Enter a positive integer value: ";
    cin >> n;

    // Create pattern of stars
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";  // print star
            stars++; // increase stars count
        }
        cout << endl; // move to next row
    }

    // Print total number of stars
    cout << "Total number of stars: " << stars << endl;

    return 0;
}
