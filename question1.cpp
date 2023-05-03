#include <iostream>
using namespace std;

int main() {
  int n, factorial = 1;
  cout << "Enter a positive integer: ";
  cin >> n;

  // Calculate factorial using a for loop
  for (int i = 1; i <= n; i++) {
    factorial *= i;
  }

  // Output the factorial and check if it's even or odd
  cout << "The factorial of " << n << " is " << factorial << endl;
  if (factorial % 2 == 0) {
    cout << "The factorial of " << n << " is even." << endl;
  } else {
    cout << "The factorial of " << n << " is odd." << endl;
  }

  return 0;
}
